#include <stdlib.h>
#include "main.h"

int *array_range(int mn, int mx)
{
	int range, i;
	int *p;

	range = 0;

	if (mn > mx)
		return (NULL);

	range = ((mx + 1) - mn);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = mn + i;
	}

	return (p);
}

