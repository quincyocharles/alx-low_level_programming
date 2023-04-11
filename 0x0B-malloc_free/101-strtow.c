#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 * Return: The number of words.
 */
static int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
	if (*str == ' ' || *str == '\t' || *str == '\n')
	in_word = 0;
	else if (in_word == 0)
	{
	in_word = 1;
	count++;
	}
	str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: A pointer to an array of strings (words), or NULL if str is NULL,
 *         str is "", or memory allocation fails.
 */
char **strtow(char *str)
{
	int i, j, k, words;
	char **matrix;

	if (str == NULL || *str == '\0')
	return (NULL);

	words = count_words(str);
	if (words == 0)
	return (NULL);

	matrix = malloc((words + 1) * sizeof(char *));
	if (matrix == NULL)
	return (NULL);

	for (i = 0, j = 0; i < words; i++)
	{
	while (str[j] == ' ' || str[j] == '\t' || str[j] == '\n')
	j++;

	k = j;
	while (str[k] && str[k] != ' ' && str[k] != '\t' && str[k] != '\n')
	k++;

	matrix[i] = malloc((k - j + 1) * sizeof(char));
	if (matrix[i] == NULL)
	{
	for (i--; i >= 0; i--)
	free(matrix[i]);
	free(matrix);
	return (NULL);
	}
	for (; j < k; j++)
	matrix[i][j - k - 1] = str[j];
	matrix[i][j - k - 1] = '\0';
	}

	matrix[words] = NULL;
	return (matrix);
}
