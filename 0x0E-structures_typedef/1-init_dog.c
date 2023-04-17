
#include <stdlib.h>

#include "dog.h"


void init_dog(char *name, char *owner, float age, struct dog *d,)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->age = age;
		d->name = name;
		
		
	}
}
