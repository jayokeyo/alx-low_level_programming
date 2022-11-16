#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (null)\n");
	if (d->age < 0)
		printf("Age: %.6f\n", d->age);
	else
		printf("Age: (null)");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (null)");
}
