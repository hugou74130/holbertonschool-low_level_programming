<p align="center">
  <a href="" rel="noopener">
 <img width=400px height=400px src="https://image.noelshack.com/fichiers/2025/45/3/1762375639-gemini-generated-image-aglxqiaglxqiaglx.png" alt="Project logo"></a>
</p>

<h3 align="center">Git intro</h3>

<div align="center">

[![Status](https://img.shields.io/badge/status-active-success.svg)]()
[![GitHub Issues](https://img.shields.io/github/issues/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/issues)
[![GitHub Pull Requests](https://img.shields.io/github/issues-pr/kylelobo/The-Documentation-Compendium.svg)](https://github.com/kylelobo/The-Documentation-Compendium/pulls)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](/LICENSE)

</div>

---

<p align="center"> This project serves as a practical and accessible introductory guide for those new to Git and GitHub. It provides a safe learning environment to master the basic commands and understand the fundamental principles of distributed version control.
	<br>
</p>

## 📝 Table of Contents

- [About](#about)
- [Getting Started](#getting_started)
- [Usage](#usage)
- [Built Using](#built_using)
- [Authors](#authors)
- [Acknowledgments](#acknowledgement)

## 🧐 About <a name = "about"></a>

Write about 1-2 paragraphs describing the purpose of your project.

## 🏁 Getting Started <a name = "getting_started"></a>

This "Git Intro" repository is a dedicated, hands-on learning resource created specifically for beginners who are taking their first steps with Git and GitHub. The primary purpose of this project is to demystify version control, transitioning you from confusion to confidence by providing a safe, controlled environment for practice. We focus on the absolute essentials, ensuring you grasp the core concepts and master fundamental commands like clone, add, commit, push, and pull without the pressure of a complex, live production project.

The ultimate goal is to equip you with the practical knowledge necessary to collaborate effectively and manage your own code history. By providing clear, step-by-step exercises and files explicitly designed for experimentation, this project ensures you can gain true mastery over the basic Git workflow. Use this space to make mistakes, learn from them, and firmly establish the foundational skills required before moving on to larger, team-based development projects.
### Prerequisites

To get started with this project and practice the Git commands, you primarily need two things installed on your system: Git and a Code Editor.

### 1. Prerequisites

Before starting, ensure you have the following installed:

	Git: The version control system itself.

	A Code Editor: To view and modify the files within the repository (e.g., VS Code, Sublime Text, Atom).

	A Command Line Interface (CLI): You will be executing all Git commands through a terminal window (e.g., Terminal on Mac/Linux, Git Bash on Windows, or integrated terminal in your code editor).

### 2. Installation Instructions

Follow the steps below to set up your environment:

### Installing

This section provides a step-by-step guide to get your Git development environment running and ready for practice.

### Step 1: Install Git

The first step is installing the Git version control system on your computer.

```
# On Windows, download and run the installer from git-scm.com.
# On macOS (using Homebrew):
brew install git

# On Linux (Debian/Ubuntu):
sudo apt update
sudo apt install git
```

### Step 2: Verify Git Installation

Confirm that Git is installed correctly and accessible from your command line.

```
# Check the installed version of Git
git --version
```

### Step 3: Configure Your Git Identity

Set your global user name and email. These credentials will be attached to every commit you make.

```
# Replace "Your Name" with your actual name
git config --global user.name "Your Name"

# Replace "your.email@example.com" with your actual email
git config --global user.email "your.email@example.com"
```
### Step 4: Clone the Git Intro Repository

Download a copy of this entire project repository onto your local machine.

```
# Navigate to the folder where you want to keep your projects
cd ~/Projects

# Clone the repository (Replace [REPOSITORY_URL] with the actual URL)
git clone [REPOSITORY_URL]

```

### Step 5: Navigate into the Project Directory

Change your current directory in the terminal to the newly cloned project folder.

```
# Change directory into the cloned project folder
cd git-intro
```

## 🎈 Usage <a name="usage"></a>

This repository is designed to be used interactively via your Command Line Interface (CLI). Follow the guided tutorials within the project to practice essential Git commands.

### 1. Locate the Tutorials

Start by reviewing the main instructions and tutorials provided in the repository.

```
# List the contents of the project
ls
# Expected output: README.md, TUTORIALS/, PRACTICE_FILES/
```
### 2. Configure Your Practice File

Navigate to the directory dedicated to practice and open the designated file in your code editor.
Bash
```
# Change into the practice files directory
cd PRACTICE_FILES

# Open the main practice file in your editor (e.g., using 'code' for VS Code)
code practice-workspace.txt
```

### 3. Practice the Core Workflow

Follow the guided steps in the TUTORIALS/ folder. For each step, you will modify a file, stage the change, and commit it.
```
Action	Command to Practice	Purpose
Make a Change	(Use your code editor)	Modify practice-workspace.txt by adding a line of text.
Stage the Change	git add practice-workspace.txt	Tell Git which changes to include in the next snapshot (commit).
Commit the Change	git commit -m "Added my first line"	Record the staged changes as a permanent snapshot in the project history.
```

### 4. Practice Branching

Once you are comfortable with commits, practice isolating your work on a new branch.
Bash
```
# Create and switch to a new branch for feature work
git checkout -b my-new-feature

# Repeat the modify, add, and commit steps here...

# Switch back to the main branch
git checkout main
```

### 5. Review Your History

Use the following command regularly to see how your changes and commits build the project's history.
Bash
```
# View the commit history
git log
```

## ⛏️ Built Using <a name = "built_using"></a>

- [Git](https://git-scm.com/) - The essential distributed version control system.
- [Github](https://github.com/) - The platform used to host this repository and practice collaboration workflows.
- [your Terminal/CLI]() - The main interface for executing all practice commands.
- [VS Code (or your preferred editor)]() - The tool used for editing the exercise files.

## ✍️ Authors <a name = "authors"></a>

- [@hugou74130](https://github.com/hugou74130)

## 🎉 Acknowledgements <a name = "acknowledgement"></a>

- Hat tip to anyone whose code was used
- Inspiration
- References
