#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 * Return: The number of words.
 */

int count_words(const char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
	if (isspace(*str))
	{
	in_word = 0;
	}
	else if (!in_word)
	{
	in_word = 1;
	count++;
	}

	str++;
	}

	return count;
	}

	char **strtow(char *str)
	{
	if (str == NULL || *str == '\0')
	{
	return NULL;
	}
	int num_words = count_words(str);
	if (num_words == 0)
	{
	return NULL;
	}

	char **words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
	return NULL;
	}
	int i, j, k;

	for (i = 0, j = 0; i < num_words; i++)
	{
	while (isspace(str[j]))
	{
	j++;
	}

	k = j;
	while (str[k] && !isspace(str[k]))
	{
	k++;
	}

	int len = k - j;
	words[i] = malloc((len + 1) * sizeof(char));
	if (words[i] == NULL)
	{
	for (int l = 0; l < i; l++)
	{
	free(words[l]);
	}

	free(words);
	return NULL;
	}

	strncpy(words[i], str + j, len);
	words[i][len] = '\0';
	j = k;
	}

	words[i] = NULL;
	return words;
}
