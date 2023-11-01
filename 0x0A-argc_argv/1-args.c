#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc:the argument count
 * @argv:the argument value
 * Return: 0 for success
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	int i;

	if (argc == 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		for (i = 0; i <= argc; i++)
		{
			;
		}


	printf("%d\n", argc - 1);
	}

	return (0);
}
