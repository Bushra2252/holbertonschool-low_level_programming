#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes
 * @d: pointer
 * @name: dog
 * @age: dog
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}

