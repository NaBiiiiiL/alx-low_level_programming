#include "main.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if fals
 */

int isLower(char c)
{
	return (c >= 97 && c<= 122);
}

/**
 * isdelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if ( == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalize words
 */

char *cap_string(char *S)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		S+++;
	}
	return (ptr);
}
