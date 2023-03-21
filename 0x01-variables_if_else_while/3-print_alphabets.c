#include <stdio.h>

/**
 * main - A program that prints alphabets in lower case and then in uppercase
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;
	char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
return (0);
}
