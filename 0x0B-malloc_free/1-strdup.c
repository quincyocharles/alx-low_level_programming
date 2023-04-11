#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 * Return: On success, a pointer to the duplicated string.
 * On failure, NULL.
 */

char *_strdup(char *str)
{
	char *dupli;

	if (str == NULL)
	return (NULL);

	dupli = malloc(strlen(str) + 1);

	if (dupli == NULL)
	return (NULL);

	strcpy(dupli, str);

	return (dupli);
}
