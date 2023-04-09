#include "main.h"
#include "stdio.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
	printf("%s\n", argv[p]);
	}
	return (0);
}
