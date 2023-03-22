#include <stdio.h>
/**
 * main - To print single number digits
 * Return: 0 (Successful)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
{
	putchar(n);
	if (n == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
return (0);
}
