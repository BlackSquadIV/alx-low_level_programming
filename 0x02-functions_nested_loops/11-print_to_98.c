#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - To print natural numbers up to 98
 *
 * @n: function parameter
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
		printf("%d”, i");
			if (i != 98)
			printf(", ");
		}
	}

	else if (i == n)
	{
	printf("%d");
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
		printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}

	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
		printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}

}
