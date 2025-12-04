<p align="center">
  <a href="" rel="noopener">
    <img width=200px height=200px src="https://image.noelshack.com/fichiers/2025/49/4/1764855022-gemini-generated-image-ivw1uoivw1uoivw1.jpg" alt="Project logo"></a>
</p>

<h3 align="center">Doubly Linked Lists</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">
  Implementation complète de listes chaînées doublement liées en C.
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

Ce projet implémente les listes chaînées doublement liées, une structure de données avancée où chaque nœud contient une valeur et deux pointeurs : un vers le nœud suivant et un vers le nœud précédent. Cette implémentation permet une navigation bidirectionnelle dans la liste, offrant plus de flexibilité que les listes simplement chaînées.

Les listes doublement chaînées sont particulièrement utiles pour les applications nécessitant un accès rapide aux deux extrémités de la liste, une navigation arrière efficace, et des opérations d'insertion/suppression optimisées. Ce projet fournit une implémentation complète avec gestion mémoire appropriée et des fonctions robustes pour manipuler ces structures.

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
cd holbertonschool-low_level_programming/doubly_linked_lists
```

Compilez les fichiers sources :

```bash
gcc -Wall -Wextra -Werror *.c -o doubly_lists
```

Exécutez le programme :

```bash
./doubly_lists
```

## 🎈 Usage <a name="usage"></a>

Voici comment utiliser les principales fonctions de ce projet :

**Créer et initialiser une liste doublement chaînée :**
```c
dlistint_t *head = NULL;
// Ajouter des nœuds à la liste
```

**Ajouter des éléments :**
```c
// Ajouter au début de la liste
add_dnodeint(&head, 42);

// Ajouter à la fin de la liste
add_dnodeint_end(&head, 100);

// Insérer à une position spécifique
insert_dnodeint_at_index(&head, 50, 2);
```

**Naviguer dans la liste :**
```c
// Parcourir de l'avant
dlistint_t *current = head;
while (current != NULL) {
    printf("%d ", current->n);
    current = current->next;
}

// Parcourir en arrière
while (current != NULL) {
    printf("%d ", current->n);
    current = current->prev;
}
```

**Supprimer des éléments :**
```c
// Supprimer à un index spécifique
delete_dnodeint_at_index(&head, 1);

// Libérer toute la liste
free_dlistint(head);
```

## 🔧 Running the tests <a name="tests"></a>

### Tests des fonctions principales

Les tests valident que chaque fonction fonctionne correctement avec les deux pointeurs :

```bash
gcc -Wall -Wextra -Werror main.c *.c -o test
./test
```

### Tests de navigation bidirectionnelle

Vérifiez que la navigation avant et arrière fonctionne correctement :

```bash
# Vérifier que les pointeurs next et prev sont correctement liés
# Vérifier la navigation avant et arrière
# Vérifier l'intégrité des pointeurs lors des insertions/suppressions
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
- Ressources éducatives sur les structures de données avancées
