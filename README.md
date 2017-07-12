# Simple Shell(hsh)  
Simple shell project is a Holberton School project replicating a basic command line interpreter(\
shell) that executes commands by evaluating user input. 


## File Descriptions  


## Usage  
Simple shell currently support builtins `env` and `exit` as well as functions available in the environment variable, PATH. All programs were compile with `gcc 4.8.4` in Ubuntu 14.05.5 LTS.  

Clone simple_shell repository:  
` git clone https://github.com/jhuang10123/simple_shell.git `  

Compile program:  
`gcc -Wall -Wextra -Werror -pedantic *.c -o hsh`

Holberton shell can then be invoked by running the executable `hsh`
  
To run in interactive mode, enter `./hsh` and a command once gree\
ted by prompt.  

To run in noninteractive mode, pipe command into this hsh: `echo \
"ls -l" | ./hsh`  

## Example
To run a simple `ls` command:  
```
#include "shell.h"  

```
## Authors
Alexa Inga -  [Github](https://github.com/ )  
Jennifer Huang - [Github](https://github.com/jhuang10123)