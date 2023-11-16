#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_list - prints all the elements found in a list
 * @h: list
 * Return: node count
*/

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t count = 0;

	while (c != NULL)
	{
		if (c->str != NULL)
		{
			printf("[%d] %s\n", c->len, c->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		count += 1;
		c = c->next;
	}
	return (count);
}
