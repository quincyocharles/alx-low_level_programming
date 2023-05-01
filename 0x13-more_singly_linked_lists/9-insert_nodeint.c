#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the first element of the list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current;

	if (head == NULL)
	return (NULL);

	/* Create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);
	new_node->n = n;

	/* Special case for head insertion */
	if (idx == 0)
	{
	new_node->next = *head;
	*head = new_node;
	return (new_node);
	}

	/* Traverse the list until the desired position is reached */
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	current = current->next;

	/* If the position is not found, return NULL */
	if (current == NULL)
	{
	free(new_node);
	return (NULL);
	}

	/* Insert new node */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
