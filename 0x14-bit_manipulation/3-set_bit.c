#include "main.h"

/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: a pointer pointing the number to change
 * @index: variable rep the index of the bit to set to 1
 *
 * Return: 1 (success), -1 (failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
