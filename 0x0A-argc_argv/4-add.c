#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nm, dt, sm = 0;

	for (nm = 1; nm < argc; nm++)
	{
		for (dt = 0; argv[nm][dt]; dt++)
		{
			if (argv[nm][dt] < '0' || argv[nm][dt] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sm += atoi(argv[nm]);
	}

	printf("%d\n", sm);

	return (0);
}
