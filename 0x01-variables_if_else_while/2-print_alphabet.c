#include <stdio.h>

/**
 * main - A program that prints alphabets in lowercase
 * Return: 0 (Succesful)
 */

int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
return (0);
}
