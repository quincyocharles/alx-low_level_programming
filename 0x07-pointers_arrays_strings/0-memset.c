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
	int r = 0;

	for (; n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
