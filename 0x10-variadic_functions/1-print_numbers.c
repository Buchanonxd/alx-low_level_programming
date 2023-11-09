#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separates the numbers
 * @n: number of integers passed to the function
 * Return: is void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printnum;
	unsigned int i;
	int x;

	va_start(printnum, n);

	for (i = 0; i < n; i++)
	{
		x =  va_arg(printnum, int);
		printf("%d", x);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(printnum);

}
