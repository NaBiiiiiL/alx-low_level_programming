#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog
 * @d: the dog to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		pritf("name: %s\n", d->name ? d->name : "(nil)");
		printf("agr: %F\n", d->age);
		printf("owner: %s\n", d->owner ? D->owner : "(nil)");
	}
}
