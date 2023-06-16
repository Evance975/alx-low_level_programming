#include <stdio.h>
/**
 * main - prints alphabet in lower case
 *
 *Return: Always 0 when success
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
