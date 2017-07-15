#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#define DELIM "\n\r\t "

/**
 * struct list - linked list
 * @value: data stored
 * @next: address to next node
 */
typedef struct list
{
	char *value;
	struct list *next;
} list_t;

/**
 * struct builtin - struct storing builtin commands
 * @command: command for builtin
 * @f: function pointer to builtin command
 */
typedef struct builtin
{
	char *command;
	void (*f)();
} builtin_t;

/* builtin */
int isbuiltin(char *command, char *envp[]);
void env_var(char *envp[]);
void exit_fcn(char *envp[]);

/* execute */
void _execute(char *filename, char *argv[], char *envp[]);

/* strings.c */
void _putstring(char *str);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);

/* token */
char **tokenize(char *str);

/* helpers */
void run_prompt(void);
int _putchar(char c);
int file_stat(char *str);
char *_memset(char *buffer);
void cmd_error(char *filename);
void signal_handle(int n);

/* path */
list_t *get_path(void);
char *check_path(list_t *list, char *input);
list_t *add_node_end(list_t **head, char *value);
void run_path(list_t *path, char **tokens, char *envp[]);

/* free */
void free_linked(list_t *head, char *buffer);
void free_2darray(char **array);


void endoffile(char *buffer);
#endif /*SHELL_H*/
