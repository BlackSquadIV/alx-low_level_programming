#include "main.h"

/**
 * print_sign - to print the sign of numbers
 *
 * @n: function parameter
 *
 * Return: 0, 1 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);
	}
	else if (n == 0)
		{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (0);
		}
		else
		{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (-1);
		}
}
