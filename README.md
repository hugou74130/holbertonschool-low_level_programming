<p align="center">
  <a href="" rel="noopener">
 <img width=200px height=200px src="https://i.imgur.com/6wj0hh6.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Holberton School - Low Level Programming</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">  
Ce dépôt contient l’ensemble des projets réalisés en langage C dans le cadre du cursus **Low Level Programming** de la **Holberton School**.  
Il couvre les bases de la programmation système : mémoire, pointeurs, structures, compilation, et algorithmes fondamentaux.  
</p>

---

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Deployment](#deployment)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

---

## 🧐 About <a name = "about"></a>

Le projet **Low Level Programming** a pour objectif d’apprendre les fondations de la programmation en langage **C**, ainsi que la logique bas niveau derrière le fonctionnement des ordinateurs.  
On y découvre notamment :  
- La gestion de la mémoire (malloc, free)  
- Les pointeurs et les tableaux  
- Les structures et les listes chaînées  
- Les entrées/sorties et les fichiers  
- Les algorithmes de tri et de manipulation de données  
- Les concepts de compilation et d’édition de liens  

Chaque dossier de ce dépôt correspond à un projet ou un module indépendant.

---

## 🏁 Getting Started <a name = "getting_started"></a>

### Prérequis

Tu dois disposer d’un environnement compatible avec la compilation en C.  
Sur Ubuntu (ou tout système Linux), installe simplement :

```bash
sudo apt update
sudo apt install build-essential
```

Cela installe `gcc`, `make` et les bibliothèques nécessaires.

### Installation

Clone le dépôt sur ta machine :

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming
```

Chaque dossier contient un ou plusieurs fichiers `.c` ainsi qu’un `main.c` de test.  
Pour compiler un programme, utilise par exemple :

```bash
gcc -Wall -Werror -Wextra -pedantic file.c main.c -o program
```

Puis exécute-le :

```bash
./program
```

---

## 🔧 Tests <a name = "tests"></a>

Les tests sont réalisés à l’aide de fichiers `main.c` fournis pour chaque projet.  
Pour tester un code :

```bash
gcc -Wall -Werror -Wextra -pedantic my_file.c main.c -o test
./test
```

Tu peux également créer tes propres fichiers de test pour valider le comportement des fonctions.

---

## 🎈 Usage <a name="usage"></a>

Ce dépôt peut être utilisé comme :
- Référence pour l’apprentissage du langage **C**.  
- Support pour s’entraîner à la **logique algorithmique**.  
- Base pour d’autres projets systèmes (par exemple : mini-shell, gestion mémoire, etc.).

---

## 🚀 Deployment <a name = "deployment"></a>

Aucun déploiement n’est requis :  
Les programmes sont exécutés en **ligne de commande** directement après compilation.  

---

## ⛏️ Built Using <a name = "built_using"></a>

- [C Language](https://en.wikipedia.org/wiki/C_(programming_language)) – Langage principal  
- [GCC](https://gcc.gnu.org/) – Compilateur  
- [Make](https://www.gnu.org/software/make/) – Automatisation de la compilation  
- [Ubuntu](https://ubuntu.com/) – Environnement de développement recommandé  

---

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130) – Développement, exercices et tests  
- Projet inspiré du cursus **Holberton School**

---

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Holberton School pour les projets et les ressources pédagogiques  
- L’équipe et les étudiants de la communauté pour leur aide et leurs retours  
- Les documentations officielles du C et du GCC  
