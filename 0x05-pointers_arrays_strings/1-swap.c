#include <stdio.h>

/**
 * swap_int - swaps values of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
