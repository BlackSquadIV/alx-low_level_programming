#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase except q  and e
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;
	char alp[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 24; i++)
	{
		putchar(alp[i]);
	}
		putchar('\n');
return (0);
}
