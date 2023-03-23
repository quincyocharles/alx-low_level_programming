#include "main.h"

/**
 * print_line - prints lines in the terminal
 * @n: number of timesa character should be printed
*/

void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
