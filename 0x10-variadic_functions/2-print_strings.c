#include "variadic_functions.h"



void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;
	char *p;

	va_start(valist, n);

	for (j = 0; j < n; j++)
	{
		if (separator != NULL && i != 0)
		{
		printf("%s", separator);
		p = va_arg(valist, char *);
		printf("%s", (p == NULL) ? "(nil)" : p);
		}
	}

	printf("\n");
	va_end(valist);
}
