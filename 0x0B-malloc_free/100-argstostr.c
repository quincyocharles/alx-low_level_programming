#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The number of arguments
 * @av: An array of strings containing the arguments
 * Return: A pointer to the new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;

	/* Check for invalid input */
	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calculate the total length of the string */
	for (i = 0; i < ac; i++)
	{
	len = 0;
	while (av[i][len])
	len++;
	total_len += len + 1; /* Add 1 for newline character */
	}

	/* Allocate memory for the string */
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
	return (NULL);

	/* Concatenate the arguments into the string */
	len = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	str[len++] = av[i][j];
	str[len++] = '\n'; /* Add newline character */
	}
	str[len] = '\0'; /* Terminate the string with a null character */

	return (str);
}
