#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t linked list.
 * @h: pointer to the pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current != NULL)
	{
		if (current > current->next)
			break;

		temp = current->next;
		free(current);
		current = temp;
		count++;
	}

	if (current != NULL)
	{
		count++;
		*h = NULL;
		current = current->next;
	}

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		count++;
	}

	return (count);
}
