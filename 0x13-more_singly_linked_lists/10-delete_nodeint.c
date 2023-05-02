#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position in a listint_t linked list.
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *temp_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	current_node = *head;
	for (i = 0; current_node != NULL && i < index - 1; i++)
		current_node = current_node->next;

	if (i != index - 1 || current_node->next == NULL)
		return (-1);

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	free(temp_node);

	return (1);
}
