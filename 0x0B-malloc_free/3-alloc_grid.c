#include "main.h"
#include <stddef.h>

/**
 * alloc_grid - creates a two dimensional array
 * @width: rows of array
 * @height: collumn of array
 * Return: NULL on failure otherwise 2d array of integers
*/

int **alloc_grid(int width, int height)
{
	int i, k;
	int **array;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(array[k]);
			}
			free(array);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			array[i][k] = 0;
		}

	}

	return (array);

}
