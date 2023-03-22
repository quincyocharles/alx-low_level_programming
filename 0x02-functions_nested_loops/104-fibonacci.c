#include <stdio.h>

/**
 * main - entry point
 * Return: 0
*/

int main(void)
{
	unsigned long int a = 0, b = 1, c, i;

	printf("%lu, %lu", a+1, b+1);
	for (i = 0; i < 98; i++)
	{
	c = a + b;
	printf(", %lu", c+1);
	a = b;
	b = c;
	}

	printf("\n");
	return (0);
}
