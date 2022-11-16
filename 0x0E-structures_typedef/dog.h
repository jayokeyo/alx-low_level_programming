#ifndef DOG_H
#define DOG_H
#include <float.h>
/**
 * dog - struct with details of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * Description: The struct has three items; name, age, and owner
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif /*DOG_H*/
