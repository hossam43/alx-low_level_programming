#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Entry point
 * @d: The dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: Always 0 (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
return (0);
}
