#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments of a program
 * @ac: argument count
 * @av: argument value
 * Return: NULL if it fails otherwise pointer to new string
*/
char *argstostr(int ac, char **av)
{
	int i, k, m, y = ac;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			y++;
		}

	}

	result = malloc(sizeof(char) * y + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	m = 0;

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			result[m++] = av[i][k];
		}
		result[m++] = '\n';

	}

	result[y] = '\0';
	return (result);

}
