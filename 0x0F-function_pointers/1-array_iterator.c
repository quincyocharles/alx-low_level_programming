#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to execute on each element of the array
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
	for (size_t i = 0; i < size; i++)
	{
	action(array[i]);
	}
	}
}
