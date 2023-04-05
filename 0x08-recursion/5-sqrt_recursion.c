#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find the square root of
 * Return: the natural square root of the number if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(1, n, n));
}

/**
 * find_sqrt - finds the natural square root of a number
 * @start: the start point of the search
 * @end: the end point of the search
 * @n: the original number to find the square root of
 *
 * Return: the natural square root of the number if it exists, -1 otherwise
 */
int find_sqrt(int start, int end, int n)
{
	long mid;

	if (end >= start)
	{
		mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);

		if (mid * mid > n)
			return (find_sqrt(start, mid - 1, n));

		return (find_sqrt(mid + 1, end, n));
	}

	return (-1);
}
