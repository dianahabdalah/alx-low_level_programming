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
	const listint_t *current = head, *loop_start = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		if (current > current->next && loop_start == NULL)
			loop_start = current;

		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;

		if (current == loop_start)
		{
			printf("Loop starts at [%p] %d\n", (void *)loop_start, loop_start->n);
			break;
		}
	}

	if (loop_start != NULL)
		count += printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);

	if (count == 0)
	{
		fprintf(stderr, "Error: empty list\n");
		exit(98);
	}

	return (count);
}
