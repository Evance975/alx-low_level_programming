#include "main.h"
#include <unistd.h>
/**
 * _putchar - function that writes the character c to the standard output
 * @c: variable rep the character to print
 *
 * Return: 1 (success)
 * On error Occurance, return -1, and errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
