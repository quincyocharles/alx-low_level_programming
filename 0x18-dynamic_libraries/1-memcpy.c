#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy
 * Return: pointer to the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
	dest[l] = src[l];
	}

	return (dest);
}
