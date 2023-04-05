#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	int t = 1, result = 1;

	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);
	while (result <= n)
	{
	t++;
	result = t * t;
	}
	return (result == n ? t : _sqrt_recursion(n));
}
