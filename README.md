# 0x16. C- simple_shell Project


🚀 Welcome to our Simple Shell GitHub repository, where innovation meets simplicity! In the world of computing, the command-line interface is the bedrock of efficiency, and our team has embarked on an exciting journey to redefine how you interact with your computer. 

🌟 **Why Simple Shell?**

In a world dominated by complex, feature-laden shells, we recognized the need for a lightweight, intuitive, and user-friendly shell that would empower both beginners and experienced users alike. Our project is a testament to the belief that software should be elegant, functional, and easy to use.

🔥 **Key Features:**

✅ **Simplicity:** The beauty of our Simple Shell lies in its simplicity. We've designed it with a clean and straightforward interface, so you can focus on getting your tasks done without any unnecessary clutter.

🌐 **Compatibility:** Our shell is POSIX-compliant, ensuring compatibility with a wide range of Unix-based systems. It's your reliable companion whether you're working on Linux, macOS, or any Unix-like environment.

⚡ **Customizability:** We understand that every user has unique needs. That's why we've built our Simple Shell with customization in mind. Tailor it to your preferences with ease.

📚 **Documentation:** We believe in the power of knowledge sharing. Our project includes comprehensive documentation to help you get started quickly and make the most out of the Simple Shell.

🛠️ **Open Source:** We're committed to the principles of open source software. This project is a collaborative effort, and we invite developers and enthusiasts from all corners of the globe to join us in shaping the future of this shell.

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
- [Authors](#authors)

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

## Built-in Commands
- exit: Exits the shell.
- env: Prints the current environment variables.

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

## File Input Mode
Your shell can also read commands from a file as input. To use this mode, pass the filename as a command line argument.

# Example File Input
$ ./hsh filename

## Author
- Wanyoike Mark Edwards
- Jillo Jillo
  
### Example Usage
```bash
$ ./hsh
($) /bin/ls
file1.txt  file2.txt  folder1  folder2
($) exit
$
