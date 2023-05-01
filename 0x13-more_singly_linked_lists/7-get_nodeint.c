#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the first node of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node or NULL if it does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
	return (NULL);

	current = head;
	for (i = 0; i < index && current != NULL; i++)
	current = current->next;

	if (i == index)
	return (current);

	return (NULL);
}
