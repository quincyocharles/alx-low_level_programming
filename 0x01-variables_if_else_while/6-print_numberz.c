#include <stdio.h>
/**
 * main - print all single digit numbers of base 10
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
