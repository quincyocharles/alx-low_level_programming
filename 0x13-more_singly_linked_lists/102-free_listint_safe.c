#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 *
 * @h: Double pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	while (*h != NULL && (*h)->next > *h)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	count++;
	}

	if (*h != NULL)
	{
	count++;
	free(*h);
	*h = NULL;
	}

	return (count);
}
