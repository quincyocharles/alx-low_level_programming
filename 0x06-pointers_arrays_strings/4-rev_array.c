#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements in the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int j, temp;

	for (j = 0; j < n / 2; j++)
	{
		temp = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = temp;
	}
}
