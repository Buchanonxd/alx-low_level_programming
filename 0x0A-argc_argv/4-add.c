#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: the argument count
 * @argv: the argument value
 * Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
