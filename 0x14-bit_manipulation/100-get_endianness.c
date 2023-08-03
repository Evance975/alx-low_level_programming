#include "main.h"

/**
 * get_endianness - a function that checks if a machine is little or big
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
