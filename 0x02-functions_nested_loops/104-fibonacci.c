#include <stdio.h>

/**
 * main - entry point
 * Return: 0
*/

int main(void)
{
	unsigned long int a = 1, b = 1, c;
	int i;

	printf("%llu, %llu, ", a, b);
	for (i = 2; i < 100; i++)
	{
	c = a + b;
	printf("%llu", c);

	if (i != 99)
	printf(", ");

	a = b;
	b = c;
	}

	printf("\n");

	return (0);
}
