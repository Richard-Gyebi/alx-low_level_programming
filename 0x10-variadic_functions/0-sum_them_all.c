#include <stdio.h>

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
	
	int sum = 0;
	unsigned int y;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (y = 0; y < n; y++)
		{
			sum += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (sum);
}
