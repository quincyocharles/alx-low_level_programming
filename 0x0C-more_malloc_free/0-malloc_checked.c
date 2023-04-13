#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the function terminates with a status of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
	exit(98);

	return (t);
}
