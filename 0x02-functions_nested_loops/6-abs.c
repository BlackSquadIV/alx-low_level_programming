#include "main.h"

/**
 * _abs - prints the absolute value of a number
 *
 * @n: parameter to be printed
 *
 * Return: Always 0
 *
 */

int _abs(int n)
{
	if (n >= 0)
	n = n;
	else if (n < 0)
	n = -(n);
	return (n);
}
