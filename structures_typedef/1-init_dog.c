#include "dog.h"
/**
 * init_dog - prints struct dog
 * @d: struct
 * @name: struct dog
 * @age: float
 * @owner: string
 * REturn: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
