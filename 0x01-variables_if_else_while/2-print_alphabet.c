#include <stdio.h>
/**
 * main - prints alphabet in lower case
 *
 *Return: Always 0 when success
 */

int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 52; i++)
	{
		putchar(alpha[i]);
	}
	putchar("\n");
	return (0);
}
