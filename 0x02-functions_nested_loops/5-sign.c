#include "main.h"

/**
 * print_sign - to print the sign of a number
 * @n: number to be checked
 * Return: 1 and prints + if n is greater than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
