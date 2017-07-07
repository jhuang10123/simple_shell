#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#define BUFLEN 1024
#define DELIM " \n"

/* execute */
void _execute(char *filename, char *argv[]);

/* string */
void putstring(char *str);
int _putchar(char c);
int _strlen(char *s);

#endif /*SHELL_H*/
