#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum integer
 * @max: the maximum integer
 * Return: 0 if unsuccessful otherwise pointer to array created
*/

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(size * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}


	for (i = 0; min <= max ; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
