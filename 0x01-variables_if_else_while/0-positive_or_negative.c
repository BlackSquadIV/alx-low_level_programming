#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - A program that prints the sign value of a number
 * Return: 0 (Successfu)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
	printf("is positive\n");
else
	if (n == 0)
		printf("is zero\n");
	else
		printf("is negative\n");
return (0);
}
