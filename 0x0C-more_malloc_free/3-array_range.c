#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers containing all values between
 * min (inclusive) and max (inclusive).
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: If successful, a pointer to the newly created array, else NULL.
 */

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min + i;

	return (arr);
}
