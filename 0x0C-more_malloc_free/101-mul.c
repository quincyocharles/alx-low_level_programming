#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2, res_len;
	int *res;

	/* Validate the number of arguments */
	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	/* Validate that num1 and num2 are composed of digits only */
	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return (98);
	}
	}
	}

	/* Calculate the length of the two input numbers */
	len1 = j - 1;
	len2 = j - 1;

	/* Allocate memory for the result array */
	res_len = len1 + len2 + 1;
	res = calloc(res_len, sizeof(int));
	if (res == NULL)
	{
	printf("Error\n");
	return (98);
	}

	/* Multiply the two input numbers */
	for (i = len1; i >= 0; i--)
	{
	for (j = len2; j >= 0; j--)
	{
	res[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
	}
	}

	/* Handle carries */
	for (i = res_len - 1; i >= 0; i--)
	{
	if (res[i] > 9)
	{
	res[i - 1] += res[i] / 10;
	res[i] %= 10;
	}
	}

	/* Print the result */
	i = 0;
	while (i < res_len && res[i] == 0)
	i++;
	if (i == res_len)
	printf("0\n");
	else
	{
	for (; i < res_len; i++)
	printf("%d", res[i]);
	printf("\n");
	}

	/* Free memory */
	free(res);

	return (0);
}
