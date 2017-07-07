#include "shell.h"
/**
 * run_prompt - prints prompt to stdout
 */
void run_prompt(void)
{
	char *buffer = "$ ";

	write(1, buffer, 3);
}
