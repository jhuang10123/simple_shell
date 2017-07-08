#include "shell.h"
/**
 * putstring - prints a string
 * @str: string to print
 *
 */
void putstring(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
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
/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
 	}
	return (s2[i] - s1[i]);
}
/**
 * _strcat - concat 2 strings
 * @dest: dest string
 * @src: string to add to dest
 * Return: pointer to newly concatenated dest string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] += '\0';
	return (dest);
}
