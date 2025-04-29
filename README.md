# The C Programming Language Exercises Repository

This repository contains exercises from the book The C Programming Language, organised by chapter. Follow the guidelines below to maintain a consistent workflow and directory structure.

## Table of Contents
- [Branching Strategy](#branching-strategy)
- [Before Working on an Exercise](#before-working-on-an-exercise)
- [Directory & File Naming](#directory--file-naming)
- [After Completing an Exercise](#after-completing-an-exercise)
- [After a Pull Request is Merged](#after-a-pull-request-is-merged)
- [Resources for Learning Git](#resources-for-learning-git)

## Branching Strategy
- **Branch name format:** `chore/exerciseX-Y`
  - `X` = chapter number
  - `Y` = exercise number
- Always branch off the `main` branch.

## Before Working on an Exercise
1. Update your local `main` branch:
   ```bash
   git checkout main
   git pull origin main
   ```
2. Create and switch to a new branch:
   ```bash
   git checkout chore/exerciseX-Y
   ```

## Directory & File Naming
- Create a folder for each chapter under `exercises-chapterX`:
  ```
  exercises-chapter3/
    ├── exercise-1.c
    └── exercise-2.c
  ```
- **Folder format:** `exercises-chapterX`
- **File format:** `exercise-Y.c`

## After Completing an Exercise
1. Stage your changes:
   ```bash
   git add .
   ```
   or alternatively if you want to stage a single file:
   ```bash
   git add exercises/ChapterX/exercise-Y.c
   ```
2. Commit with a clear message:
   ```bash
   git commit -m "chore: exercise X-Y"
   ```
3. Push your branch to GitHub:
   ```bash
   git push origin chore/exerciseX-Y
   ```

## After a Pull Request is Merged
1. Switch back to `main`:
   ```bash
   git checkout main
   ```
2. Pull the latest changes:
   ```bash
   git pull origin main
   ```

## Resources for Learning Git
- [Learn Git - The Full Course](https://youtu.be/rH3zE7VlIMs?si=u44a79-X1fbgTXZJ)
- [Git Magic](http://www-cs-students.stanford.edu/~blynn/gitmagic/)
- [A bunch of good git tutorials](https://gist.github.com/jaseemabid/1321592)
