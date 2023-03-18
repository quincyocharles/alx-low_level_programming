#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: o
*/
int main(void)
{
	int b, c, d;

	for (b = 0; b <= 7; b++)
	{
	for (c = b + 1; c <= 8; c++)
	{
	for (d = c + 1; d <= 9; d++)
	{
	putchar('0' + b);
	putchar('0' + c);
	putchar('0' + d);
	if (b < 7)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
