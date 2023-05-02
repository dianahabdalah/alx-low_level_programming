#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_node = head, *fast_node = head;
	size_t node_count = 0;

	while (slow_node != NULL && fast_node != NULL && fast_node->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_node, slow_node->n);
		node_count++;

		slow_node = slow_node->next;
		fast_node = fast_node->next->next;

		if (slow_node == fast_node)
		{
			printf("[%p] %d\n", (void *)slow_node, slow_node->n);
			node_count++;
			break;
		}
	}

	while (head != NULL && node_count == 0)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		head = head->next;
	}

	if (node_count == 0)
	{
		fprintf(stderr, "Error: empty list\n");
		exit(98);
	}

	return (node_count);
}
