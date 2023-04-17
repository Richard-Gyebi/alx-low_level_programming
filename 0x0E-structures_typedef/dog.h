
#ifndef _HEADER_
#define _HEADER_


struct dog
{
	char *owner;
	char *name;
	float age;
	
};


typedef struct dog dog_p;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_p *new_dog(char *name, float age, char *owner);
void free_dog(dog_p *d);

#endif
