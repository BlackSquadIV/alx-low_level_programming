#include <stdio.h>

/**
 * main - A program that prints lowercase alphabets in reverse
 * Return: 0 (Successful)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i--);
	}
	putchar('\n');

return (0);
}
