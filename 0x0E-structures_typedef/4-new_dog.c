#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog object
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * Return: name of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *name_cp, *owner_cp;
	unsigned int a, len1 = 0, len2 = 0;

	new_name = malloc(sizeof(dog_t));
	if (name == NULL)
		return (NULL);
	if (age <= 0 || owner == NULL)
	{
		free(new_name);
		return (NULL);
	}
	for (a = 0; name[a] != '\0'; a++)
		len1++;
	for (a = 0; owner[a] != '\0'; a++)
		len2++;
	name_cp = malloc(sizeof(char) * (len1 + 1));
	if (name_cp == NULL)
		return (NULL);
	owner_cp = malloc(sizeof(char) * (len2 + 1));
	if (owner_cp == NULL)
		return (NULL);
	for (a = 0; a <= len1; a++)
		name_cp[a] = name[a];
	for (a = 0; a <= len2; a++)
		owner_cp[a] = owner[a];
	new_name->name = name_cp;
	new_name->owner = owner_cp;
	new_name->age = age;
	return (new_name);
}
