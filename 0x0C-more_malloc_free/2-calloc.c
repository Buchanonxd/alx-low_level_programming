#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array using malloc
 * @nmemb: the number of elements to allocate
 * @size: the byte size
 * Return: null if unsuccessful othereise pointer to allocated array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)

	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		array[i] = 0;
	}

	return (array);
}
