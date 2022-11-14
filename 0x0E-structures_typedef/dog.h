#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines the dog attributes
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of thedog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *dg, char *name, float age, char *owner);
void print_dog(struct dog *dg);
typedef struct dog dg_type;
dg_type *new_dog(char *name, float age, char *owner);
void free_dog(dg_type *dg);
#endif
