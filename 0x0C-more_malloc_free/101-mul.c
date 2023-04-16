#include "main.h"


int main(int argc, char *argv[])
{
unsigned long ml;
int k, l;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (argv[k][l] > 57 || argv[k][l] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	ml = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", ml);
return (0);
}
