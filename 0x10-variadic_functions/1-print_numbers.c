
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	
	putchar('\n');
	va_end(ap);
}

