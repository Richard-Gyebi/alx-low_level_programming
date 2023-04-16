#include <stdlib.h>
#include "main.h"

void *_realloc(void *pr, unsigned int os, unsigned int ns)
{
	char *npr;
	unsigned int i;

	if (ns == os)
		return (pr);
	if ((ns == 0) && (pr != NULL))
	{
		free(pr);
		return (NULL);
	}
	if (pr == NULL)
	{
		npr = malloc(ns);
		if (npr == NULL)
			return (NULL);
	}
	if (ns > os && (pr != NULL))
	{
		npr = malloc(ns);
		if (npr == NULL)
			return (npr);
		for (i = 0; i < os; i++)
			npr[i] = *((char *)pr + 1);
		free(pr);
	}

	return (npr);
}
