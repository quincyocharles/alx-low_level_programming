#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index of the bit to set
 *
 * Return: 1 if successful, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	/* check if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* set the bit to 1 */
	*n |= mask;

	return (1);
}
