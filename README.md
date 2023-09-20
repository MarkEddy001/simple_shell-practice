# simple_shell Project

## Table of Contents
- [Description](#description)
- [Project Details](#project-details)
- [Concepts](#concepts)
- [Background Context](#background-context)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Built-in Commands](#built-in-commands)
- [File Input Mode](#file-input-mode)
- [Author](#author)
- [Contributors](#contributors)
- [License](#license)

## Description
This project is a simple UNIX command-line interpreter, also known as a shell. The goal is to create a functional shell that can execute basic commands and handle various features of a typical shell environment.

## Project Details
- Group Project: Team of 2 people (Wanyoike Edwards, Jillo Jillo)
- Start Date: September 6, 2023, 6:00 AM
- End Date: September 21, 2023, 6:00 AM
- Checker Release: September 20, 2023, 1:12 AM

## Concepts
For this project, you will explore the following concepts:
- Basics of programming
- Basics of C
- Thinking like an engineer
- Group work
- Learning how to learn

## Background Context
This project challenges your knowledge of programming, C, and engineering thinking. It encourages you to work in teams and emphasizes the importance of learning independently.

### Important Notes
- Do not copy code or solutions from others.
- Always write code from scratch to ensure a deep understanding.
- Do not share resources that provide complete solutions; focus on learning.

## Learning Objectives
Upon completing this project, you should be able to explain the following concepts without using external resources:
- The original Unix operating system's designer and implementer
- The first version of the UNIX shell
- The predecessor of the C programming language
- The significance of Ken Thompson
- How a shell works
- Understanding pid and ppid
- Manipulating the environment of a process
- The difference between a function and a system call
- Creating processes
- Prototypes of the main function
- How the shell uses the PATH to find programs
- Executing other programs using execve
- Suspending process execution until a child terminates
- Understanding EOF (end-of-file)

## Requirements
### General
- Allowed Editors: vi, vim, emacs
- Compilation: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`
- All files should end with a new line.
- Your code should follow the Betty style.
- Your shell should not have any memory leaks.
- No more than 5 functions per file.
- All header files should be include guarded.
- Use system calls only when necessary.
- Write a README with the project description.

## Getting Started
1. Clone this repository to your local machine.
2. Compile the shell using the provided compilation command.
3. Run the shell using `./hsh`.

## Usage
Your shell supports the following features:
- Displaying a prompt and waiting for user input.
- Executing simple commands (no pipes, redirection, or advanced features).
- Handling errors gracefully.
- Exiting the shell using the `exit` built-in.
- Displaying the current environment variables using the `env` built-in.

### Example Usage
```bash
$ ./hsh
($) /bin/ls
file1.txt  file2.txt  folder1  folder2
($) exit
$ 
