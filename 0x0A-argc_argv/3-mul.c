#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int n1, n2, prd;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	prd = n1 * n2;

	printf("%d\n", prd);

	return (0);
}
