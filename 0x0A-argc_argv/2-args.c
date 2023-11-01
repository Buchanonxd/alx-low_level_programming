#include "main.h"
#include <stdio.h>

/**
 * main - prints the arguments passed to the program
 * @argc:the argument count
 * @argv:the argument value
 * Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
