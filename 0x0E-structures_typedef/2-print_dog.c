#include "dog.h"
#include <stddef.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (d->age != NULL)
		printf("Age: %s\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
}
