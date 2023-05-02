#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to the pointer to the head of the list
 *
 * Return: the data of the deleted head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current_node;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	current_node = *head;
	*head = (*head)->next;
	data = current_node->n;
	free(current_node);

	return (data);
}
