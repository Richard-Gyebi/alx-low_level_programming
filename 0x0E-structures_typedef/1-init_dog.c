
#include <stdlib.h>

#include "dog.h"


void init_dog(char *name, char *owner, struct dog *d, float age,)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->age = age;
		d->name = name;
		
		
	}
}
