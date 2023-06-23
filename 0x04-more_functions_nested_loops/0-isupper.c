#include "main.h"

/**
 * _isupper - uppercase letters function
 * @c: character to check
 *
 * Return: 0 if false or 1 if true(upper)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
