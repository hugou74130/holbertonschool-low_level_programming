<p align="center">
  <a href="https://github.com/hugou74130/holbertonschool-low_level_programming/tree/main/more_malloc_free" rel="noopener">
 <img width=200px height=200px src="https://image.noelshack.com/fichiers/2025/46/3/1762948631-gemini-generated-image-xz7ysqxz7ysqxz7y.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Gestion Avancée de la Mémoire (more_malloc_free)</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)

Ce projet explore des techniques avancées de gestion de la mémoire dynamique en C, en se concentrant sur `malloc`, `free`, et `realloc`.

## 📝 Table des matières

- [À propos](#à-propos)
- [Démarrage](#démarrage)
- [Utilisation](#utilisation)
- [Technologies utilisées](#technologies-utilisées)
- [Auteurs](#auteurs)
- [Remerciements](#remerciements)

## 🧐 À propos

Ce projet, faisant partie du cursus Holberton School, approfondit les concepts de gestion de la mémoire dynamique en C. Il ne se contente pas de `malloc` et `free` de base, mais explore également la fonction `realloc` pour redimensionner la mémoire, les stratégies de gestion des échecs d'allocation, et l'allocation d'espaces mémoires plus complexes comme les tableaux de pointeurs (souvent utilisés pour simuler des tableaux à deux dimensions).

L'objectif est de maîtriser l'allocation, la libération et la réallocation de la mémoire de manière sûre et efficace, en évitant les fuites de mémoire et les erreurs de segmentation.

## 🏁 Démarrage

Ces instructions vous permettront d'obtenir une copie du projet et de le faire fonctionner sur votre machine locale à des fins de développement et de test.

### Prérequis

Pour compiler et exécuter les fichiers C de ce projet, vous aurez besoin d'un compilateur C comme GCC.

```bash
sudo apt update
sudo apt install gcc
```

### Installation

Clonez le dépôt sur votre machine locale :

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
```

Naviguez vers le répertoire du projet :

```bash
cd holbertonschool-low_level_programming/more_malloc_free
```

Vous pouvez ensuite compiler n'importe quel fichier C dans ce répertoire. Par exemple, pour compiler `0-malloc_checked.c` (en le liant à un fichier `main.c` s'il est fourni) :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-malloc_checked.c main_0.c -o 0-malloc_checked
```

Et pour l'exécuter :

```bash
./0-malloc_checked
```

## 🎈 Utilisation

Ce répertoire contient une série de fichiers, chacun résolvant un problème spécifique lié à la gestion de la mémoire :

- **0-malloc_checked.c** : Implémente une fonction qui alloue de la mémoire en utilisant malloc et gère les échecs d'allocation en terminant le programme.

- **1-string_nconcat.c** : Concatène deux chaînes de caractères en utilisant malloc.

- **2-calloc.c** : Implémente une fonction simulant calloc (allocation avec initialisation à zéro) en utilisant malloc.

- **3-array_range.c** : Crée un tableau d'entiers contenant une plage de valeurs.

- **100-realloc.c** : Implémente une fonction simulant realloc.

- **101-mul.c** : Un programme qui multiplie deux grands nombres positifs, nécessitant une gestion dynamique de la mémoire pour les résultats.

Chaque fichier peut être compilé et testé individuellement pour comprendre le concept qu'il illustre.

## ⛏️ Technologies utilisées

- **Langage C** - Langage de programmation
- **GCC** - Compilateur C

## ✍️ Auteurs

- **@hugou74130** - Travail initial et développement

Voir aussi la liste des contributeurs qui ont participé à ce projet.

## 🎉 Remerciements

- Holberton School pour le programme et l'inspiration.
- La communauté C pour les innombrables ressources et documentations.
