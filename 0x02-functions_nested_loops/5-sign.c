#include "main.h"

/**
 *prints the sign of a number
 * @n: the number of the sign to be printed
 * print_sign prints the sign of a number
 *Return: 1 if number is greater than 0
 *-1 ir number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
