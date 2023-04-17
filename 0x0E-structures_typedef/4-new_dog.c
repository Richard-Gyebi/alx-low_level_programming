
#include <stdlib.h>

#include "dog.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);





dog_p *new_dog(char *owner, float age, char *name, )
{
	dog_p *cute_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cute_dog = malloc(sizeof(dog_p));

		if (cute_dog == NULL)
			return (NULL);

		cute_dog->name = malloc(sizeof(char) * name_l);

		if (cute_dog->name == NULL)
		{
			free(cute_dog);
			return (NULL);
		}

		cute_dog->owner = malloc(sizeof(char) * own_l);

		if (cute_dog->owner == NULL)
		{
			free(cute_dog->name);
			free(cute_dog);
			return (NULL);
		}

		cute_dog->name = _strcpy(cute_dog->name, name);
		cute_dog->owner = _strcpy(cute_dog->owner, owner);
		cute_dog->age = age;
	}

	return (cute_dog);
}





char *_strcpy(char *dest, char *src,)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	dest[k++] = '\0';

	return (dest);
}

int _strlen(char *h)
{
	int f = 0;

	for (; *h != '\0'; h++)
	{
		f++;
	}

	return (c);
}

