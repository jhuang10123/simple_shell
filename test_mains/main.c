#include "shell.h"
/**
 * test files
 */
int main(void)
{
	char *filename = "/bin/ls";
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};


	_execute(filename, argv);

	return (0);
}
