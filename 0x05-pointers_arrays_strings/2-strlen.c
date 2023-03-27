#include <stdio.h>

/**
 * _strlen - returns length of string
 * @str: string to get legth of
 * Return: length of string
*/

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
