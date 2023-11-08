#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an index
 * @array: array
 * @size: size of an array
 * @cmp: index of the first element
 * Return: -1 if it finds null otherwise cmp
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);

		}

	}
	return (-1);

}
