#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - releases memory allocated to struct dog
 * @d: pointer to struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
