#include <stdio.h>

/**
 * main - A program that prints lowercase alphabets in reverse
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz"

	for (i = 26; i >= 1; i -)
	{
		putchar(alp[i]);
	}
	putchar('\n');

return (0);
}
