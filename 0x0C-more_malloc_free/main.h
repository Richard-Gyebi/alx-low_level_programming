#ifndef MAIN_H
#define MAIN_H

void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *sp1, char *sp2, unsigned int nn);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int os, unsigned int ns);
int _putchar(char c);
int _atoi(const char *s);
void print_int(unsigned long int n);


#endif
