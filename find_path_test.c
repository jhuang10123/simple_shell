#include "shell.h"
/**
 * test files
 */
int main(void)
{
	list_t *path_list;

	path_list = find_path();

	printf("%s/n", path_list->value);
	return (0);
}
