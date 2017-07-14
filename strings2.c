#include "shell.h"
/**
 * _strncmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: difference
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && i < n; i++)
	{
		if (s1[i] == s2[i])
			return (0);
	}
	return (-1);
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
