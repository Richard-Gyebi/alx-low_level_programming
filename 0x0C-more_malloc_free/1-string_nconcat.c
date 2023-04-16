#include "main.h"
#include <stdlib.h>
#include <stdlib.h>


int _strlen(char *string)
{
	int y;

	for (y = 0; string[y] != '\0'; y++)
		;
	return (y);
}

char *string_nconcat(char *sp1, char *sp2, unsigned int nn)
{
	char *pr;
	int nm, ln, k, l;
	nm = nn;
	if (sp1 == NULL) 
		sp1 = "";
	if (sp2 == NULL)
		sp2 = "";
	if (nm < 0) 
		return (NULL);
	if (nm >= _strlen(sp2)) 
		nm = _strlen(sp2);

	ln = _strlen(sp1) + nm + 1; 

	pr = malloc(sizeof(*pr) * ln); 
	if (pr == NULL)
		return (NULL);

	for (k = 0; sp1[k] != '\0'; k++) 
		pr[i] = sp1[i];
	for (l = 0; l < nm; l++)
		pr[k + l] = sp2[l];
	pr[k + l] = '\0';

	return (pr);
}
