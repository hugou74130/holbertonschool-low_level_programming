<p align="center">
  <a href="" rel="noopener">
    <img width=200px height=200px src="https://image.noelshack.com/fichiers/2025/49/4/1764855432-gemini-generated-image-ghxpwfghxpwfghxp.jpg" alt="Project logo"></a>
</p>

<h3 align="center">File I/O</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/hugou74130/holbertonschool-low_level_programming.svg)](https://github.com/hugou74130/holbertonschool-low_level_programming/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center">
  Implémentation complète des opérations d'entrée/sortie de fichiers en C.
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

Ce projet explore les opérations fondamentales d'entrée/sortie de fichiers en langage C. Il couvre les appels système de bas niveau comme `open()`, `close()`, `read()` et `write()`, permettant une manipulation directe des fichiers avec un contrôle complet sur les permissions et les modes d'accès.

Ce projet démontre comment créer, ouvrir, lire, écrire et fermer des fichiers de manière sécurisée. Il inclut également des techniques avancées pour gérer les erreurs, manipuler les descripteurs de fichiers et travailler avec différents modes d'ouverture. Ces compétences sont essentielles pour comprendre comment les systèmes d'exploitation gèrent les fichiers au niveau du noyau.

## 🏁 Getting Started <a name="getting_started"></a>

Ces instructions vous permettront d'obtenir une copie du projet en cours d'exécution sur votre machine locale à des fins de développement et de test.

### Prerequisites

Vous avez besoin d'un compilateur C et des outils de développement standard :

```bash
# Sur Ubuntu/Debian
sudo apt-get install gcc build-essential

# Sur macOS (avec Homebrew)
brew install gcc

# Sur Windows
# Installer MinGW ou utiliser un compilateur C compatible
```

### Installing

Clonez le dépôt et naviguez vers le répertoire du projet :

```bash
git clone https://github.com/hugou74130/holbertonschool-low_level_programming.git
cd holbertonschool-low_level_programming/file_io
```

Compilez les fichiers sources :

```bash
gcc -Wall -Wextra -Werror *.c -o file_io
```

Exécutez le programme :

```bash
./file_io
```

## 🎈 Usage <a name="usage"></a>

Voici comment utiliser les principales fonctions de ce projet :

**Créer et ouvrir un fichier :**
```c
#include "main.h"

int fd = open("fichier.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
if (fd == -1)
    perror("open");
```

**Écrire dans un fichier :**
```c
char *text = "Bonjour, monde!";
ssize_t written = write(fd, text, strlen(text));
if (written == -1)
    perror("write");
```

**Lire depuis un fichier :**
```c
char buffer[1024];
ssize_t bytes_read = read(fd, buffer, sizeof(buffer) - 1);
if (bytes_read == -1)
    perror("read");
else
    buffer[bytes_read] = '\0';
```

**Copier un fichier :**
```c
int cp(const char *file_from, const char *file_to)
{
    // Implémenter la logique de copie
}
```

**Fermer un fichier :**
```c
if (close(fd) == -1)
    perror("close");
```

## 🔧 Running the tests <a name="tests"></a>

### Tests des opérations de lecture/écriture

Vérifiez que les données sont correctement écrites et lues :

```bash
gcc -Wall -Wextra -Werror main.c *.c -o test
./test
```

### Tests de gestion des erreurs

Testez le comportement lors d'erreurs d'accès aux fichiers :

```bash
# Vérifier les permissions de fichier
# Vérifier les erreurs de fichier non trouvé
# Vérifier la gestion des descripteurs de fichiers invalides
```

### Tests de manipulation de fichiers

Validez les opérations de copie et de modification de fichiers :

```bash
# Copier des fichiers avec succès
# Vérifier l'intégrité des données copiées
# Tester avec différentes tailles de fichiers
```

## ⛏️ Built Using <a name="built_using"></a>

- [C](https://en.wikipedia.org/wiki/C_(programming_language)) - Programming Language
- [GCC](https://gcc.gnu.org/) - Compiler
- [POSIX API](https://en.wikipedia.org/wiki/POSIX) - File I/O System Calls
- [Standard C Library](https://en.wikipedia.org/wiki/C_standard_library) - Standard Library

## ✍️ Authors <a name="authors"></a>

- [@hugou74130](https://github.com/hugou74130) - Idea & Initial work

Voir aussi la liste des [contributeurs](https://github.com/hugou74130/holbertonschool-low_level_programming/contributors) qui ont participé à ce projet.

## 🎉 Acknowledgements <a name="acknowledgement"></a>

- Holberton School pour l'inspiration pédagogique
- La documentation POSIX pour les références sur les appels système
- Ressources éducatives sur les opérations d'entrée/sortie en C
