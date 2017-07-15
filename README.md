# Simple Shell(hsh)
Simple shell project is a Holberton School project replicating a basic command line interpreter(\
shell) that executes commands by evaluating user input.


## File Descriptions
[shell.h](https://github.com/jhuang10123/simple_shell/blob/master/shell.h) - header file including macros , prototypes, & struct
[main.c](https://github.com/jhuang10123/simple_shell/blob/master/main.c) - takes user command and executes if file exists
[tokens.c](https://github.com/jhuang10123/simple_shell/blob/master/tokens.c) - splits a character string into 2d array of tokens
[add_node_end.c](https://github.com/jhuang10123/simple_shell/blob/master/add_node_end.c) - adds a new node at the end of a listint_t list.
[check_path.c](https://github.com/jhuang10123/simple_shell/blob/master/check_path.c) - concat user input to values of linked list
[execute.c](https://github.com/jhuang10123/simple_shell/blob/master/execute.c) - executes the command
[get_path.c](https://github.com/jhuang10123/simple_shell/blob/master/get_path.c) - tokenize PATH and store values in a linked list
[isbuiltin.c](https://github.com/jhuang10123/simple_shell/blob/master/isbuiltin.c) - searches for builtin and finds it's corresponding handling fcn
[to_free.c](https://github.com/jhuang10123/simple_shell/blob/master/to_free.c) - frees lists
<<<<<<< HEAD
- `free_linked(list_t *head, char *buffer)` - frees a linked list and buffer  
- `free_2darray(char **array)` - frees a 2D array  
[run_path.c]() - store PATH in linked list and check if usr command exist  
=======
- `free_linked(list_t *head)` - frees a linked list
- `free_2darray(char **array)` - frees a 2D array

>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3

Helper Functions:
[helpers.c](https://github.com/jhuang10123/simple_shell/blob/master/helpers.c) - helper functions:
<<<<<<< HEAD
- `run_prompt(void)` - prints prompt to stdout  
- `_memset(char *buffer)` - fills memory with null bytes  
- `file_stat(char *str)` - check whether file exists  
- `cmd_error(char *filename)`  
- `signal_handle` - signal handler  
=======
- `run_prompt(void)` - prints prompt to stdout
- `_memset(char *buffer)` - fills memory with null bytes
- `file_stat(char *str)` - check whether file exists
- `cmd_error(char *filename)`
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3
[strings.c](https://github.com/jhuang10123/simple_shell/blob/master/strings.c) - helper string functions:
- `_putstring(char *str)`
- `_strlen(char *s)`
- `_strcmp(char *s1, char *s2)`
- `*_strcat(char *dest, char *src)`
- `_strcpy(char *dest, char *src)`
[strings2.](https://github.com/jhuang10123/simple_shell/blob/master/strings2.c) - more helper string functions
- `_strncmp(char *s1, char *s2, int n)`
- `_putchar(char c)`


## Usage
Simple shell currently support builtins `env` and `exit` as well as functions available in the environment variable, PATH. All programs were compile with `gcc 4.8.4` in Ubuntu 14.05.5 LTS.

Clone simple_shell repository:
` git clone https://github.com/jhuang10123/simple_shell.git `

<<<<<<< HEAD
Compile program:  
`gcc -Wall -Wextra -Werror -pedantic *.c -o hsh`  
=======
Compile program:
`gcc -Wall -Wextra -Werror -pedantic *.c -o hsh`
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3

Holberton shell can then be invoked by running the executable `hsh`

To run in interactive mode, enter `./hsh` and a command once gree\
ted by prompt.

To run in noninteractive mode, pipe command into this hsh: `echo \
"ls -l" | ./hsh`

To run a simple `ls -l` command in interactive mode:
`($) ls -l`


## Authors
<<<<<<< HEAD
Jennifer Huang - [Github](https://github.com/jhuang10123)  
Alexa Inga - [Github](https://github.com/alexainga2)  
=======
Alexa Inga -  [Github](https://github.com/alexainga2)
Jennifer Huang - [Github](https://github.com/jhuang10123)
>>>>>>> e2fb8c5c9c982d8c3dbd41c5ab905c73079779c3
