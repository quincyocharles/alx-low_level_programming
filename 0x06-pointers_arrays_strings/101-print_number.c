#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	int num_digits = 0, temp = n, exp = 1;

	if (n < 0)
	{
	_putchar('-');
	temp = -temp;
	exp = -exp;
	}
	while (temp > 0)
	{
	num_digits++;
	temp /= 10;
	exp *= 10;
	}
	if (num_digits == 0)
	{
	_putchar('0');
	return;
	}
	exp /= 10;
	while (exp != 0)
	{
	int digit = n / exp;

	_putchar(digit + '0');
	n -= digit * exp;
	exp /= 10;
	}
}
