#include "main.h"

/**
 * _abs - function
 *
 * @n: takes in integer type
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
