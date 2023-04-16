#include <stdlib.h>

void *malloc_checked(unsigned int c)
{
	void *b = malloc(c);

	if (b == NULL)
		exit(98);

	return (b);
}
