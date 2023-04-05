#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - recursive helper function to check if a number is prime
 * @n: the number to check
 * @div: the current divisor to test
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int div)
{
	if (n <= 1)
	return (0);
	else if (n == 2)
	return (1);
	else if (n % div == 0)
	return (0);
	else if (div * div > n)
	return (1);
	else
	return (is_prime(n, div + 1));
}
