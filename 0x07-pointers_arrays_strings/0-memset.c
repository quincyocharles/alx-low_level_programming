#include "main.h"

/**
 * _memset - fills the 1st n bytes
 * @s: pointer to mem area to fill
 * @b: constant byte to fill mem
 * @n: number of bytes to fill
 * Return: pointer to mem area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
		s[r] = b;
	return (s);
}
