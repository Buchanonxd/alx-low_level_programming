#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - frees listint_t
 * @head: pointer to head
 * Return: 0
*/

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		listint_t *tmp = *head;

		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
