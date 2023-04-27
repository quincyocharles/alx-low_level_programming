#include <stdio.h>

void __attribute__((constructor)) called_first();

/**
 * called_first - function that prints a message before main
 */
void called_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
