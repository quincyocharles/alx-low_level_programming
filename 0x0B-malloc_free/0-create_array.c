#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * @size: size of the array to create
 * @c: char to initialize the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int t;

	if (size == 0)
	return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	return (NULL);

	for (t = 0; t < size; t++)
	arr[t] = c;

	return (arr);
}
