#ifndef SHELL_H
#define SHELL_H
extern char **environ;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/stat.h>

void _prompt(char *prompt);
void _prompt2(void);
int _putchar(char c);
int _atoi(char *s);
void print_number(int n);
void int_to_str(int n, char *s);
char *_strstr(char *haystack, char *needle);
int contains(char *str1, char *str2);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char **tokenize(char *buf);
void _execute(pid_t pid, char *buf, char **argv,
		char **new_argv, char **envp, int *exit_status);
void execute(char *buf, char *av, char **new_argv, char **envp);
char *_memset(char *s, char b, unsigned int n);
char *_getenv(char *str1);
char *_getenv1(char *str1, char **envp);
char *handle_path(char *command, char **find);
void _free(char **argv);
int  _eexit(int exit_status);
void check_usage(int argc);
void cmd_not_found(char **argv, char **new_argv, int *exit_status);
int count_delim(char *str, char delim);
void handle_builtin(char *command, char **argv, char *buf,
		char **new_argv, int exit_status);
void print_env(char **new_argv);
void errmsg(char **argv, char **new_argv);
void errmsg2(char **argv, char **new_argv);
void _echo(char **new_argv, int exit_status);
void replace_path(char **new_argv, char *var, int i);
void handle_comments(char **new_argv);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
ssize_t _getline(char **buf, size_t *n, int fd);
int _strcmp(char *s1, char *s2);

#endif /* SHELL_H */
