
#include <stdio.h>

#include <stdlib.h>
#include "dog.h"


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		
	}
}
