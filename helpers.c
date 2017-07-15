#include "shell.h"
/**
 * run_prompt - prints prompt to stdout
 */
void run_prompt(void)
{
	char *buffer = "($) ";
	int len;

	len = _strlen(buffer);

	write(1, buffer, len);
}

/**
 * _memset - fills memory with null bytes
 * @buffer: pointer to memory location to set
 * Return: set memory
 */
char *_memset(char *buffer)
{
	unsigned int i;

	for (i = 0; buffer[i] != '\0'; i++)
	{
		buffer[i] = '0';
	}
	return (buffer);
}

/**
 * file_stat - check whether file exists
 * @str: string containing full path of a command
 * Return: 0 if file exist, else 1
 */
int file_stat(char *str)
{
	struct stat sb;

	if (stat(str, &sb) == 0)
		return (0);
	else
		return (1);
}

/**
 * cmd_error - error message for command not found
 * @filename: name of command
 */
void cmd_error(char *filename)
{
	_putstring("hsh: 1: ");
	_putstring(filename);
	_putstring(": not found\n");
}

/**
 * signal_handle - signal handler
 * @n: signal
 */
void signal_handle(int n)
{
	(void) n;
	_putstring("\n($)");
}
