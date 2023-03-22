#include <stdio.h>

/**
 * main - To print numbers in base 16 in lowercase
 * Return: 0 (Successful)
 */

int main(void)
{
	char num[] = "0123456789";
	char alp[] = "abcdef";
	int i = 10;
	int a = 6;

	for (i = 0; i <= 10; i++)
	{
		putchar(num[i]);
	}
	for (a = 0; a <= 6; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
return (0);
}
