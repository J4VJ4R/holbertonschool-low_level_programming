#ifndef DOG_H
#define DOG_H
/**
 *struct dog - creating a structure for a dog
 *@name: name of the dog
 *@owner: name of the owner
 *@age: age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
