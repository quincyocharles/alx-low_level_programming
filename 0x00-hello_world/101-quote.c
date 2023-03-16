#include <unistd.h>
/**
 * main - prints and that piece of art is useful
 *
 * not allowed to use any functions listed in the NAME section
 * Return: 1
*/
int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
