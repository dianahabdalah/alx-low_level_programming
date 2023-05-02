#include "lists.h"

/**
 * find_listint_loop - finds the loop in a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: address of node where loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_node = head, *fast_node = head;

	while (slow_node != NULL && fast_node != NULL && fast_node->next != NULL)
	{
		slow_node = slow_node->next;
		fast_node = fast_node->next->next;

		if (slow_node == fast_node)
		{
			slow_node = head;
			while (slow_node != fast_node)
			{
				slow_node = slow_node->next;
				fast_node = fast_node->next;
			}
			return (slow_node);
		}
	}

	return (NULL);
}
