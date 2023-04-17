
#include <stdlib.h>
#include "dog.h"


void free_dog(dog_p *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->owner);
		free(d->name);
		
	}
}
