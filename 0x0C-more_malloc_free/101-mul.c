#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: the string to measure
 * Return: the length of s
 */
size_t _strlen(const char *s)
{
	size_t n = 0;

	while (*s++)
		n++;

	return (n);
}

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 */
void _puts(const char *s)
{
	write(STDOUT_FILENO, s, _strlen(s));
}

/**
 * mul - multiplies two positive numbers
 * @num1: the first number as a string
 * @num2: the second number as a string
 */
void mul(const char *num1, const char *num2)
{
	size_t len1, len2, len;
	int *result, i, j, carry, n1, n2, sum;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = calloc(len, sizeof(*result));

	if (!result)
		exit(1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}

		result[i + j + 1] = carry;
	}

	i = 0;

	while (i < len - 1 && result[i] == 0)
		i++;

	for (; i < len; i++)
		_putchar(result[i] + '0');

	_putchar('\n');

	free(result);
}

/**
 * main - entry point
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}

	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < _strlen(argv[i]); j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_puts("Error\n");
				return (98);
			}
		}
	}

	mul(argv[1], argv[2]);

	return (0);
}
