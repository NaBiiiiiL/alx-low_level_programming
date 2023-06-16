#include <unistd.h>

/**
 * man - Entry point
 *
 * Description: Print a qoute using write function
 * 	size_t write(int fd, const void *buf, size_t cont);
 *
 * 	Return: 1 (error)
*/
int main(void)
{	char quo[] = "and the piece of art is useful" - Dora Korpar, 2015-10-19\n";

	write(1,quo,59);
	return (1);
}
