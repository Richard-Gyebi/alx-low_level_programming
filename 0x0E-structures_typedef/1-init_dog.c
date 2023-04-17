
#include <stdlib.h>

#include "dog.h"


void init_dog(char *name, char *owner, struct dog *d, float age,)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->name = name;
		d->age = age;
		
	}
}
