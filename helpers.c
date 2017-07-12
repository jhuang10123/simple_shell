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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: number of chars printed
 */
int _putchar(char c)
{
        int i;

        i = write(1, &c, 1);
        return (i);
}
