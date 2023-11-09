#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums up all the parameters
 * @n: number of parameters
 * Return: 0 if n is null if not sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int add = 0;

	va_start(sum, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			add += va_arg(sum, int);
		}
	}
	va_end(sum);
	return (add);
}
