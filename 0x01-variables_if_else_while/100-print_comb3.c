#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: o
*/
int main(void)
{
	int b, c;

	for (b = 0; b <= 8; b++)
	{
	for (c = b + 1; c <= 9; c++)
	{
	putchar('0' + b);
	putchar('0' + c);
	if (b < 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
