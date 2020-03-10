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
char *_strdup(char *str);gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e
#endif
