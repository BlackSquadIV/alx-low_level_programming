#include <stdio.h>

/**
 * main - To print numbers in base 16 in lowercase
 * Return: 0 (Successful)
 */

int main(void)
{
	char num[] = "0123456789";
	char alp[] = "abcdef";
	int i = 16;

	for (i = 0; i <= 16; i++)
	{
		putchar(num[i]);
		putchar(alp[i]);
	}
	putchar('\n');
return (0);
}
