#include "main.h"

/**
 * clear_bit - function that sets the value of a given bit to 0
 * @n: pointer pointing to the number to change
 * @index: variable rep the index of the bit to clear
 *
 * Return: 1 (success), -1 (fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
