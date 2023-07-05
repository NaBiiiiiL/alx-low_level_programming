#include "main.h"

/**
 * _puts_recurion - prints a string, followed by a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recurion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recurion(s + 1);
	}
}
