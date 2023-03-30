#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_nums = "4433007711";

	for (i = 0; s[i]; i++)
	{
	for (j = 0; leet_chars[j]; j++)
	{
	if (s[i] == leet_chars[j])
	{
	s[i] = leet_nums[j];
	break;
	}
	}
	}
	return (s);
}
