#include <stdio.h>
/**
 * main - print all lowercase except q and e
 * Return: 0
*/
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	if (b != 'q' && b != 'e')
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}

