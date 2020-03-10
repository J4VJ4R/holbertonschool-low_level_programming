#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - this a new fock dog
 * @d: this the fock dog
 */
void print_dog(struct dog *d)
{
	if (d->owner == NULL)
	{
		d->owner = "nil\n";
	}
	if (d->name == NULL)
		d->name = "nil\n";
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
