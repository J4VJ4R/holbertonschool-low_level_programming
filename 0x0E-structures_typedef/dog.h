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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
