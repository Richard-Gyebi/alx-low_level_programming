#include <stdlib.h>
#include "main.h"

void *_calloc(unsigned int nmem, unsigned int siz)
{
	void *p;
	unsigned int i;

	if (nmem == 0 || siz == 0)
		return (NULL);
	p = malloc(nmem * siz);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmem * siz); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
