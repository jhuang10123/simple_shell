#include "shell.h"
int main(void)
{
	int retval;
	list_t *path;
	char *input = "ls";

	path = find_path();

	retval = check_path(path, input);

	printf("%d\n", retval);

	return (0);
}
