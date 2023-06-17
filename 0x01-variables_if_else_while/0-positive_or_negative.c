#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
*/

int main(void)

{

	int n;

	n = rand() % 100 + 1;
	if (n > 0)
	{
		printf("The number %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("The number %d is zero\n", n);
	}
	else
	{
		printf("The number %d is negative\n", n);
	}
	return (0);
}
