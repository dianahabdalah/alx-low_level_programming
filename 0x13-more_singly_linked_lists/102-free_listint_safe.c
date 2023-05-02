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
	listint_t *slow_node = *h, *fast_node = *h, *temp_node;
	size_t node_count = 0;

	while (slow_node != NULL && fast_node != NULL && fast_node->next != NULL)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next->next;

		if (slow_node == fast_node)
		{
			node_count++;
			while (slow_node->next != fast_node)
			{
				temp_node = slow_node->next;
				free(slow_node);
				slow_node = temp_node;
				node_count++;
			}
			free(slow_node);
			node_count++;
			break;
		}
	}

	while (*h != NULL)
	{
		temp_node = (*h)->next;
		free(*h);
		*h = temp_node;
		node_count++;
	}

	return (node_count);
}
