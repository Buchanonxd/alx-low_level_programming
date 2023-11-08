#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 *
 * @size: size of an array
 * @array: array of pointers to functions
 * @action: A pointer to a funtion
 * Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
