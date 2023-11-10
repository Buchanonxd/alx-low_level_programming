#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - ptints strings followed by a newline
 * @separator: separates strings
 * @n: number of strings passed
 * Return: is 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printstr;
	unsigned int i;
	char *str;

	va_start(printstr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(printstr, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}


	}
	va_end(printstr);
	printf("\n");
}
