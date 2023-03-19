#include <stdio.h>
/**
 * main - A program that prints the size of various types
 * Return: 0 (Success)
 */

int main(void)
{
	int x = 2;
	char a = 'j';
	float b = 34.67;
	long int y;
	long long int k;

	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long int: %d", sizeof(long long int));
	printf("Size of a float: %d", sizeof(float));
	return (0);
}
