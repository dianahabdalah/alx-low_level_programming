#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_ linked list.
 * @head: pointer to the head of the list
 *
 * Return: the sum of the data of the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}
