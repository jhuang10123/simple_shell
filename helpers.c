#include "shell.h"
/**
 * run_prompt - prints prompt to stdout
 */
void run_prompt(void)
{
	char *buffer = "($) ";

	write(1, buffer, 3);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: number of chars printed
 */
int _putchar(char c)
{
        int i;

        i = write(1, &c, 1);
        return (i);
}
