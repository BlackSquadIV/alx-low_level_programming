#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet, in lowercase, ten times.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char i;
	int n;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (n = 1; n <= 10; n++)
		{
		_putchar('\n');
		}
	_putchar(i);
	};
}
