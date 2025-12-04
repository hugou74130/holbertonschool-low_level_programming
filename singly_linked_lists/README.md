<p align="center">
  <a href="" rel="noopener">
    <img width=200px height=200px src="https://image.noelshack.com/fichiers/2025/49/4/1764853936-gemini-generated-image-au2pdxau2pdxau2p.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Singly Linked Lists</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">
  Implementation complète de listes chaînées simples en C.
  <br>
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Running the tests](#tests)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgements](#acknowledgement)

## 🧐 About <a name="about"></a>

Ce projet implémente une structure de données fondamentale en programmation : les listes chaînées simples. Une liste chaînée est une collection de nœuds où chaque nœud contient une valeur et un pointeur vers le nœud suivant. Ce projet fournit des fonctions complètes pour créer, manipuler et gérer des listes chaînées en C, incluant l'ajout d'éléments, la suppression, la recherche et l'affichage des données.

Les listes chaînées sont essentielles pour comprendre les structures de données dynamiques et sont un prérequis pour maîtriser des structures plus complexes comme les arbres et les graphes.

## 🏁 Getting Started <a name="getting_started"></a>

Ces instructions vous permettront d'obtenir une copie du projet en cours d'exécution sur votre machine locale à des fins de développement et de test.

### Prerequisites

Vous avez besoin d'un compilateur C installé sur votre système :

```bash
# Sur Ubuntu/Debian
sudo apt-get install gcc

# Sur macOS (avec Homebrew)
brew install gcc

# Sur Windows
# Installer MinGW ou utiliser un compilateur C compatible
```

### Installing

Clonez le dépôt et naviguez vers le répertoire du projet :

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/singly_linked_lists
```

Compilez les fichiers sources :

```bash
gcc -Wall -Wextra -Werror *.c -o linked_lists
```

Exécutez le programme :

```bash
./linked_lists
```

## 🎈 Usage <a name="usage"></a>

Voici comment utiliser les principales fonctions de ce projet :

**Créer et initialiser une liste :**
```c
list_t *head = NULL;
// Ajouter des nœuds à la liste
```

**Ajouter des éléments :**
```c
// Ajouter au début de la liste
add_node(&head, "Nouveau nœud");

// Ajouter à une position spécifique
add_node_at_index(&head, "Élément", index);
```

**Afficher la liste :**
```c
print_list(head);
```

**Récupérer la longueur :**
```c
size_t length = list_len(head);
printf("La liste contient %zu éléments\n", length);
```

## 🔧 Running the tests <a name="tests"></a>

### Tests des fonctions principales

Les tests valident que chaque fonction fonctionne correctement :

```bash
gcc -Wall -Wextra -Werror main.c *.c -o test
./test
```

### Tests de manipulation de listes

Testez l'ajout, la suppression et la modification d'éléments :

```bash
# Vérifier que les éléments sont correctement ajoutés
# Vérifier que l'ordre est préservé
# Vérifier que les pointeurs sont correctement liés
```

## ⛏️ Built Using <a name="built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Programming Language
- [GCC](https://gcc.gnu.org/) - Compiler
- [Standard C Library](https://en.wikipedia.org/wiki/C_standard_library) - Standard Library

## ✍️ Authors <a name="authors"></a>

- [@hugou74130](https://github.com/hugou74130) - Idea & Initial work

Voir aussi la liste des [contributeurs](https://github.com/hugou74130/holbertonschool-low_level_programming/contributors) qui ont participé à ce projet.

## 🎉 Acknowledgements <a name="acknowledgement"></a>

- Holberton School pour l'inspiration pédagogique
- La communauté C pour les meilleures pratiques
- Ressources éducatives sur les structures de données
