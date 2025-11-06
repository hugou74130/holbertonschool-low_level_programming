#!/usr/bin/env node

const fs = require('fs');
const https = require('https');
const readline = require('readline');

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout
});

const question = (prompt) => {
	return new Promise((resolve) => {
		rl.question(prompt, (answer) => {
			resolve(answer);
		});
	});
};

const fetchGitHub = (url) => {
	return new Promise((resolve, reject) => {
		https.get(url, { headers: { 'User-Agent': 'README-Generator' } }, (res) => {
			let data = '';
			res.on('data', chunk => data += chunk);
			res.on('end', () => {
				try {
					resolve(JSON.parse(data));
				} catch {
					reject(new Error('Invalid JSON response'));
				}
			});
		}).on('error', reject);
	});
};

const extractDependencies = (packageJson) => {
	const deps = [];
	const allDeps = { ...packageJson.dependencies, ...packageJson.devDependencies };

	for (const [name, version] of Object.entries(allDeps || {})) {
		deps.push(`- [${name}](https://npmjs.com/package/${name}) - ${version}`);
	}

	return deps.slice(0, 5).join('\n'); // Top 5 dépendances
};

const extractLanguages = async (owner, repo) => {
	try {
		const data = await fetchGitHub(`https://api.github.com/repos/${owner}/${repo}/languages`);
		return Object.keys(data).join(', ');
	} catch {
		return 'JavaScript, HTML, CSS';
	}
};

const getReadmeContent = (owner, repo) => {
	return new Promise((resolve) => {
		https.get(`https://raw.githubusercontent.com/${owner}/${repo}/main/README.md`,
			{ headers: { 'User-Agent': 'README-Generator' } },
			(res) => {
				let data = '';
				res.on('data', chunk => data += chunk);
				res.on('end', () => resolve(data));
			}
		).on('error', () => resolve(''));
	});
};

async function generateREADME() {
	console.log('\n🚀 README Generator (Auto GitHub)\n');

	const repoUrl = await question('URL du repo GitHub (ex: github.com/user/repo): ');

	const match = repoUrl.match(/github\.com\/([^/]+)\/([^/]+)/);
	if (!match) {
		console.log('❌ URL GitHub invalide');
		rl.close();
		return;
	}

	const owner = match[1];
	const repo = match[2];

	console.log('\n⏳ Récupération des données du repo...\n');

	try {
		// Récupérer les infos du repo
		const repoData = await fetchGitHub(`https://api.github.com/repos/${owner}/${repo}`);

		// Récupérer package.json pour les dépendances
		let packageJson = {};
		try {
			const pkgResponse = await fetchGitHub(
				`https://api.github.com/repos/${owner}/${repo}/contents/package.json`
			);
			if (pkgResponse.content) {
				packageJson = JSON.parse(Buffer.from(pkgResponse.content, 'base64').toString());
			}
		} catch {
			// Pas de package.json, c'est ok
		}

		// Récupérer les langages utilisés
		const languages = await extractLanguages(owner, repo);

		// Récupérer le README existant s'il y en a un
		const existingReadme = await getReadmeContent(owner, repo);

		const description = repoData.description || 'Un projet intéressant';
		const topics = repoData.topics?.join(', ') || '';
		const homepage = repoData.homepage || '';
		const language = repoData.language || 'JavaScript';

		// Extraire l'URL du logo (si disponible)
		const logoMatch = existingReadme.match(/!\[.*?\]\((.*?)\)/);
		const logoUrl = logoMatch ? logoMatch[1] : 'https://i.imgur.com/6wj0hh6.jpg';

		const dependencies = extractDependencies(packageJson);

		const readme = `<p align="center">
  <a href="${homepage || '#'}" rel="noopener">
<img width=200px height=200px src="${logoUrl}" alt="Project logo"></a>
</p>
<h3 align="center">${repo}</h3>
<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/${owner}/${repo}.svg)](https://github.com/${owner}/${repo}/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/${owner}/${repo}.svg)](https://github.com/${owner}/${repo}/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> ${description}
<br>
</p>

## 📝 Table of Contents

- [À propos](#about)
- [Pour commencer](#getting_started)
- [Utilisation](#usage)
- [Construit avec](#built_using)
- [Auteurs](#authors)
- [Remerciements](#acknowledgement)

## 🧐 À propos <a name = "about"></a>

**${repo}** est un projet développé par [@${owner}](https://github.com/${owner}).

${description}

${topics ? `**Catégories:** ${topics}` : ''}

## 🏁 Pour commencer <a name = "getting_started"></a>

Ces instructions vous permettront d'obtenir une copie du projet opérationnel sur votre machine locale.

### Prérequis

- ${language}
- Node.js (si applicable)
- Git

### Installation

\`\`\`bash
git clone https://github.com/${owner}/${repo}.git
cd ${repo}
npm install
\`\`\`

## 🎈 Utilisation <a name="usage"></a>

\`\`\`bash
npm start
\`\`\`

Pour plus de détails, consultez le [repository](https://github.com/${owner}/${repo}).

## ⛏️ Construit avec <a name = "built_using"></a>

- [${language}](https://www.${language.toLowerCase()}.org/) - Langage principal
${dependencies ? '\n' + dependencies : '- Node.js\n- npm'}

## ✍️ Auteurs <a name = "authors"></a>

- [@${owner}](https://github.com/${owner}) - Travail initial

Voir aussi la liste des [contributeurs](https://github.com/${owner}/${repo}/contributors) qui ont participé à ce projet.

## 🎉 Remerciements <a name = "acknowledgement"></a>

- Merci à tous les contributeurs
- Communauté open source

---

⭐ Si ce projet vous a été utile, n'hésitez pas à lui donner une star !
`;

		fs.writeFileSync('README.md', readme, 'utf8');

		console.log(`✅ README.md généré avec succès!\n`);
		console.log(`📊 Infos extraites:`);
		console.log(`  - Repo: ${repo}`);
		console.log(`  - Propriétaire: ${owner}`);
		console.log(`  - Description: ${description}`);
		console.log(`  - Langage: ${language}`);
		console.log(`  - Topics: ${topics || 'Aucun'}\n`);

	} catch (error) {
		console.error('❌ Erreur:', error.message);
	}

	rl.close();
}

generateREADME().catch(err => {
	console.error('Erreur:', err);
	rl.close();
	process.exit(1);
});
