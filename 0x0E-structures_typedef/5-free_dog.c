#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free dogs
 * @d: dog structure data type
 * Return: 0
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
		free(d->name);
		free(d);
		free(d->owner);

}
