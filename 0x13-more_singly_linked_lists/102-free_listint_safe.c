#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t num_freed = 0;
	ptrdiff_t diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = (char *)*h - (char *)(*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			num_freed++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num_freed++;
			break;
		}
	}

	*h = NULL;

	return (num_freed);
}
