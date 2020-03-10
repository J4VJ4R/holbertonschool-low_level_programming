#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this a new dog
 *@d: the dog
 *@name: the name of the dog
 *@age: the age of the fuck dog
 *@owner: the fuck owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
