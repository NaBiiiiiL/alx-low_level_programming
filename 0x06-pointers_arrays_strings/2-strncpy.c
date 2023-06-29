#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src array
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the strring placed in dest will not be null terminated
	 */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of source is less than n
	 * write additional nill bytes to dest to
	 * onsure that a total of n bytes is writen
	 */
	while (i < n)
	{
		dest[i] = '\0';
		i++
	}

	return (dest);
}
