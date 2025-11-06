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

	return deps.slice(0, 10).join('\n');
};

const extractLanguages = async (owner, repo) => {
	try {
		const data = await fetchGitHub(`https://api.github.com/repos/${owner}/${repo}/languages`);
		return Object.keys(data).join(', ');
	} catch {
		return 'JavaScript, HTML, CSS';
	}
};

const getReadmeContent = (owner, repo, branch = 'main') => {
	return new Promise((resolve) => {
		https.get(`https://raw.githubusercontent.com/${owner}/${repo}/${branch}/README.md`,
			{ headers: { 'User-Agent': 'README-Generator' } },
			(res) => {
				if (res.statusCode !== 200) {
					resolve('');
					return;
				}
				let data = '';
				res.on('data', chunk => data += chunk);
				res.on('end', () => resolve(data));
			}
		).on('error', () => resolve(''));
	});
};

const getContributors = async (owner, repo) => {
	try {
		const data = await fetchGitHub(`https://api.github.com/repos/${owner}/${repo}/contributors?per_page=5`);
		return data.map(c => `- [@${c.login}](${c.html_url}) - ${c.contributions} contributions`).join('\n');
	} catch {
		return '';
	}
};

const getLatestRelease = async (owner, repo) => {
	try {
		const data = await fetchGitHub(`https://api.github.com/repos/${owner}/${repo}/releases/latest`);
		return `v${data.tag_name}`;
	} catch {
		return 'v1.0.0';
	}
};

const findThemeImage = async (packageJson, languages, topics) => {
	const logoMap = {
		react: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/react/react-original.svg',
		vue: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/vuejs/vuejs-original.svg',
		angular: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/angularjs/angularjs-original.svg',
		nodejs: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/nodejs/nodejs-original.svg',
		express: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/express/express-original.svg',
		python: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/python/python-original.svg',
		django: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/django/django-plain.svg',
		fastapi: 'https://cdn.jsdelivr.net/gh/devicons/devicon@latest/icons/fastapi/fastapi-original.svg',
		flask: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/flask/flask-original.svg',
		mongodb: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/mongodb/mongodb-original.svg',
		postgresql: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/postgresql/postgresql-original.svg',
		mysql: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/mysql/mysql-original.svg',
		docker: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/docker/docker-original.svg',
		kubernetes: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/kubernetes/kubernetes-plain.svg',
		typescript: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/typescript/typescript-original.svg',
		javascript: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/javascript/javascript-original.svg',
		golang: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/go/go-original.svg',
		rust: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/rust/rust-original.svg',
		java: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/java/java-original.svg',
		csharp: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/csharp/csharp-original.svg',
		dotnet: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/dotnetcore/dotnetcore-original.svg',
		nextjs: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/nextjs/nextjs-original.svg',
		nuxtjs: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/nuxtjs/nuxtjs-original.svg',
		svelte: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/svelte/svelte-original.svg',
		tailwindcss: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/tailwindcss/tailwindcss-original.svg',
		redis: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/redis/redis-original.svg',
		graphql: 'https://raw.githubusercontent.com/devicons/devicon/master/icons/graphql/graphql-plain.svg',
	};

	const allDeps = { ...packageJson.dependencies, ...packageJson.devDependencies };
	for (const [tech, logo] of Object.entries(logoMap)) {
		if (Object.keys(allDeps || {}).some(dep => dep.toLowerCase().includes(tech))) {
			return logo;
		}
	}

	if (languages) {
		const langLower = languages.toLowerCase();
		for (const [tech, logo] of Object.entries(logoMap)) {
			if (langLower.includes(tech)) {
				return logo;
			}
		}
	}

	if (topics) {
		const topicsLower = topics.toLowerCase();
		for (const [tech, logo] of Object.entries(logoMap)) {
			if (topicsLower.includes(tech)) {
				return logo;
			}
		}
	}

	return 'https://i.imgur.com/6wj0hh6.jpg';
};

const parseSection = (readme, sectionName) => {
	const regex = new RegExp(`##\\s+.*?${sectionName}.*?\\n([\\s\\S]*?)(?=##\\s|$)`, 'i');
	const match = readme.match(regex);
	return match ? match[1].trim() : '';
};

const extractFeatures = (readme, packageJson) => {
	const features = parseSection(readme, 'Features|Features|Caractéristiques');
	if (features.length > 100) return features;

	const defaultFeatures = [];
	if (packageJson.dependencies?.react) defaultFeatures.push('- ⚛️ React');
	if (packageJson.dependencies?.['express']) defaultFeatures.push('- 🚀 Express.js');
	if (packageJson.dependencies?.['mongoose']) defaultFeatures.push('- 🗄️ MongoDB avec Mongoose');
	if (packageJson.dependencies?.['vue']) defaultFeatures.push('- 💚 Vue.js');
	if (packageJson.dependencies?.['typescript']) defaultFeatures.push('- 📘 TypeScript');
	if (packageJson.devDependencies?.['jest'] || packageJson.devDependencies?.['mocha']) defaultFeatures.push('- ✅ Tests automatisés');
	if (packageJson.devDependencies?.['eslint']) defaultFeatures.push('- 🔍 Linting automatique');
	if (packageJson.dependencies?.['dotenv']) defaultFeatures.push('- 🔒 Gestion des variables d\'environnement');

	return defaultFeatures.length > 0 ? defaultFeatures.join('\n') :
		'- 🚀 Performance optimisée\n- 🎯 Facile à utiliser\n- 📱 Responsive\n- 🔒 Sécurisé';
};

const extractAbout = (readme) => {
	const about = parseSection(readme, 'About|À propos');
	return about.length > 100 ? about : '';
};

const extractUsage = (readme, packageJson) => {
	const usage = parseSection(readme, 'Usage|Utilisation');
	if (usage.length > 100) return usage;

	let scripts = [];
	if (packageJson.scripts) {
		for (const [cmd, script] of Object.entries(packageJson.scripts).slice(0, 5)) {
			scripts.push(`\`npm run ${cmd}\` - ${script}`);
		}
	}

	return scripts.length > 0 ? scripts.join('\n\n') :
		'```bash\nnpm start\n```\n\nPour plus de détails, consultez la documentation.';
};

const extractDeployment = (readme) => {
	const deployment = parseSection(readme, 'Deploy|Déploiement');
	return deployment.length > 50 ? deployment :
		'```bash\nnpm run build\n```\n\nConsultez les guides officiels de déploiement.';
};

const extractPrerequisites = (readme, packageJson) => {
	const prereq = parseSection(readme, 'Prerequis|Prerequisites');
	if (prereq.length > 50) return prereq;

	let reqs = ['- Node.js >= 14'];

	if (packageJson.dependencies?.react) reqs.push('- React');
	if (packageJson.dependencies?.['express']) reqs.push('- Express.js');
	if (packageJson.dependencies?.['vue']) reqs.push('- Vue.js');
	if (packageJson.dependencies?.['typescript']) reqs.push('- TypeScript');

	reqs.push('- npm ou yarn');
	reqs.push('- Git');

	return reqs.join('\n');
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
		const repoData = await fetchGitHub(`https://api.github.com/repos/${owner}/${repo}`);

		let packageJson = {};
		try {
			const pkgResponse = await fetchGitHub(
				`https://api.github.com/repos/${owner}/${repo}/contents/package.json`
			);
			if (pkgResponse.content) {
				packageJson = JSON.parse(Buffer.from(pkgResponse.content, 'base64').toString());
			}
		} catch {
			// Pas de package.json
		}

		const languages = await extractLanguages(owner, repo);
		const existingReadme = await getReadmeContent(owner, repo);
		const contributors = await getContributors(owner, repo);
		const latestRelease = await getLatestRelease(owner, repo);

		const description = repoData.description || 'Un projet intéressant';
		const topics = repoData.topics?.join(', ') || '';
		const homepage = repoData.homepage || '';
		const language = repoData.language || 'JavaScript';
		const stars = repoData.stargazers_count || 0;
		const forks = repoData.forks_count || 0;
		const openIssues = repoData.open_issues_count || 0;
		const watchers = repoData.watchers_count || 0;
		const createdAt = new Date(repoData.created_at).toLocaleDateString('fr-FR');
		const updatedAt = new Date(repoData.updated_at).toLocaleDateString('fr-FR');

		const logoMatch = existingReadme.match(/!\[.*?\]\((.*?)\)/);
		const logoUrl = logoMatch ? logoMatch[1] : await findThemeImage(packageJson, languages, topics);

		const dependencies = extractDependencies(packageJson);
		const license = repoData.license?.name || 'MIT';
		const features = extractFeatures(existingReadme, packageJson);
		const aboutContent = extractAbout(existingReadme);
		const usageContent = extractUsage(existingReadme, packageJson);
		const deploymentContent = extractDeployment(existingReadme);
		const prerequisitesContent = extractPrerequisites(existingReadme, packageJson);

		const readme = `<p align="center">
  <a href="${homepage || '#'}" rel="noopener">
<img width=200px height=200px src="${logoUrl}" alt="Project logo"></a>
</p>
<h3 align="center">${repo}</h3>
<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/${owner}/${repo}.svg)](https://github.com/${owner}/${repo}/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/${owner}/${repo}.svg)](https://github.com/${owner}/${repo}/pulls)
[![License](https://img.shields.io/badge/license-${license}-blue.svg)](/LICENSE)
[![Version](https://img.shields.io/badge/version-${latestRelease}-blue.svg)]()
[![Stars](https://img.shields.io/github/stars/${owner}/${repo}.svg)](https://github.com/${owner}/${repo}/stargazers)

</div>

---

<p align="center"> ${description}
<br>
</p>

## 📝 Table of Contents

- [À propos](#about)
- [Statistiques](#stats)
- [Features](#features)
- [Pour commencer](#getting_started)
- [Installation](#installation)
- [Utilisation](#usage)
- [Tests](#tests)
- [Déploiement](#deployment)
- [Construit avec](#built_using)
- [Contributeurs](#contributors)
- [Auteurs](#authors)
- [Licence](#license)
- [Remerciements](#acknowledgement)

## 🧐 À propos <a name = "about"></a>

**${repo}** est un projet développé par [@${owner}](https://github.com/${owner}).

${aboutContent || description}

${topics ? `**Catégories:** ${topics}` : ''}

**Langages utilisés:** ${languages}

## 📊 Statistiques <a name = "stats"></a>

| Statistique | Valeur |
|-------------|--------|
| ⭐ Stars | ${stars} |
| 👁️ Watchers | ${watchers} |
| 🍴 Forks | ${forks} |
| 🐛 Issues ouvertes | ${openIssues} |
| 📅 Créé le | ${createdAt} |
| 🔄 Dernière mise à jour | ${updatedAt} |
| 📦 Dernière version | ${latestRelease} |
| 📜 Licence | ${license} |

## ✨ Features <a name = "features"></a>

${features}

## 🏁 Pour commencer <a name = "getting_started"></a>

Ces instructions vous permettront d'obtenir une copie du projet opérationnel sur votre machine locale à des fins de développement et de test.

### Prérequis

${prerequisitesContent}

\`\`\`bash
# Vérifier les versions
node --version
npm --version
\`\`\`

## 📦 Installation <a name = "installation"></a>

1. **Cloner le repository**
\`\`\`bash
git clone https://github.com/${owner}/${repo}.git
cd ${repo}
\`\`\`

2. **Installer les dépendances**
\`\`\`bash
npm install
# ou
yarn install
\`\`\`

3. **Configurer les variables d'environnement**
\`\`\`bash
cp .env.example .env
# Éditer le fichier .env avec vos configurations
\`\`\`

## 🎈 Utilisation <a name="usage"></a>

${usageContent}

## 🔧 Tests <a name = "tests"></a>

Exécuter les tests automatisés :

\`\`\`bash
npm test
\`\`\`

Pour les tests avec couverture :

\`\`\`bash
npm run test:coverage
\`\`\`

## 🚀 Déploiement <a name = "deployment"></a>

${deploymentContent}

## ⛏️ Construit avec <a name = "built_using"></a>

- [${language}](https://www.${language.toLowerCase()}.org/) - Langage principal
${dependencies ? '\n' + dependencies : '- Node.js\n- npm'}

## 👥 Contributeurs <a name = "contributors"></a>

${contributors || '- Aucun contributeur pour le moment'}

Pour contribuer, consultez [CONTRIBUTING.md](CONTRIBUTING.md).

## ✍️ Auteurs <a name = "authors"></a>

- [@${owner}](https://github.com/${owner}) - Travail initial

Voir aussi la liste complète des [contributeurs](https://github.com/${owner}/${repo}/contributors) qui ont participé à ce projet.

## 📄 Licence <a name = "license"></a>

Ce projet est licencié sous la licence ${license} - voir le fichier [LICENSE](LICENSE) pour plus de détails.

## 🎉 Remerciements <a name = "acknowledgement"></a>

- Merci à tous les contributeurs
- Communauté open source
- Inspirations et références
- Tous les utilisateurs qui rapportent des bugs et proposent des améliorations

---

<div align="center">

⭐ **Si ce projet vous a été utile, n'hésitez pas à lui donner une star !** ⭐

[⬆ Retour en haut](#readme)

</div>
`;

		fs.writeFileSync('README.md', readme, 'utf8');

		console.log(`✅ README.md généré avec succès!\n`);
		console.log(`📊 Infos extraites:`);
		console.log(`  - Repo: ${repo}`);
		console.log(`  - Propriétaire: ${owner}`);
		console.log(`  - Description: ${description}`);
		console.log(`  - Langages: ${languages}`);
		console.log(`  - Stars: ${stars}`);
		console.log(`  - Forks: ${forks}`);
		console.log(`  - Dernière version: ${latestRelease}`);
		console.log(`  - Licence: ${license}\n`);

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
