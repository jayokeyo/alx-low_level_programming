#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	char *concat;
	concat = string_nconcat("", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
