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
#define DELIM " \n\r\t"

extern char **environ;

typedef struct list
{
	char *value;
	struct list *next;

} list_t;

typedef struct builtin
{
	char *command;
	void (*f)();
} builtin;

/* builtin */
int _builtin(char* command);
void env_var(void);
void exit_fcn(void);

/* execute */
void _execute(char *filename, char *argv[]);

/* strings.c */
void putstring(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);

/* token */
char **tokenize(char *str);
/* helpers */
void run_prompt(void);
int _putchar(char c);
int file_stat(char *str);

/* path */
list_t *find_path(void);
char *check_path(list_t *list, char *input);
list_t *add_node_end(list_t **head, char *value);


#endif /*SHELL_H*/
