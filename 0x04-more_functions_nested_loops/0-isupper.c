#include "main.h"

/**i
 * _isupper - checks for uppercase character
 * @c: the character to check
 * Return: 1 if c is c is uppercase and 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
