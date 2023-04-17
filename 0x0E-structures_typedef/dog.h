
#ifndef _HEADER_
#define _HEADER_


struct dog
{
	char *owner;
	char *name;
	float age;
	
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, char *owner, float age, );
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
