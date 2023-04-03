#include "main.h"

/**
 * set_string - this sets the value of a pointer to a char
 * @s: the pointer to pointer
 * @to: the pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
