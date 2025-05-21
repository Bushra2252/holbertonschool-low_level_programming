#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * print_dog - prints a struct dog
 * @d: pointer 
 *
 * Description: prints 
 * 
 * 
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

printf("Age: %.6f\n", d->age);

if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
