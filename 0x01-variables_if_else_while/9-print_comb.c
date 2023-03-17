#include <stdio.h>
/**
 * main - program that prints all possible combinations of single digit numbers
 * Return: 0
*/
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		if (b == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
