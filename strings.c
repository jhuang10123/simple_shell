#include "shell.h"
/**
 * _putstring - prints a string
 * @str: string to print
 *
 */
void _putstring(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	unsigned int i;

	if (s == NULL || *s == '\0')
		return (0);

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
 * _strcat - concatenates 2 strings
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


	dest[i] = '/';
	i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}

/**
 * _strcpy - copies a string
 * @src: string to be copied
 * @dest: location of newly copied string
 * Return: pointer to newly copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return (dest);
}
