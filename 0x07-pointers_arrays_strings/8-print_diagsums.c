#include "main.h"

/**
 * print_chessboard - This is the entry point
 * @a: the array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int q;
	int p;

	for (q = 0; q < 8; q++)
	{
		for (p = 0; p < 8; p++)
			_putchar(a[q][p]);
		_putchar('\n');
	}
}
