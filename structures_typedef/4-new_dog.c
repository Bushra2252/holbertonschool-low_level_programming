#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
*new_dog - new
*@name: name
*@age: age
*@owner: owner
*
*Return: pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog2;
char *name2, *owner2;

if (name == NULL || owner == NULL)
return (NULL);

dog2 = malloc(sizeof(dog_t));
if (dog2 == NULL)
return (NULL);

name2 = malloc(strlen(name) + 1);
if (name2 == NULL)
{
free(dog2);
return (NULL);
}
strcpy(name2, name);

owner2 = malloc(strlen(owner) + 1);
if (owner2 == NULL)
{
free(name2);
free(dog2);
return (NULL);
}
strcpy(owner2, owner);

dog2->name = name2;
dog2->age = age;
dog2->owner = owner2;

return (dog2);
}

