#include <stdio.h>

/**
 * main - entry point
 * Return: 0
*/

int main(void)
{
	unsigned long int a = 1, b = 1, c = 0;
	int i;

	for (i = 0; i < 98; i++)
	{
		c = a + b;
		printf("%lu", c);

		if (i != 97)
			printf(", ");

		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}
