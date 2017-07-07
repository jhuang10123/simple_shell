#include "shell.h"
/**
 * -- need to valgrind --
 */
char **tokenize(char *str)
{
	char **array;
	char *token;
	int i;

	array = malloc(sizeof(char *) * 1024);
	if (array == NULL)
	{
		perror("Malloc Error");
		return (NULL);
	}
	token = strtok(str, " ");

	for (i = 0; token != NULL; i++)
	{
		array[i] = token;
		token = strtok(NULL, " ");
	}

	array[i] = NULL;
	return (array);
}

/*

int main(void)
{
        char *str = " I am a test string ";
        char **array;
        int i;

	array = tokenize(str);
        for (i = 0; array[i] != NULL; i++)
	{
                printf("array[%d] = %s", i, array[i]);
        }

        return (0);
}

*/
