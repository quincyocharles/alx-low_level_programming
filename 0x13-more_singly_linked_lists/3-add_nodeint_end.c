#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to head node of linked list
 * @n: integer value to store in new node
 *
 * Return: address of new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
