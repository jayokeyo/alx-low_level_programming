#ifndef DOG_H
#define DOG_H

/**
 * dog - struct with details of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 * Description: The struct has three items; name, age, and owner
 */
struct dog {
	char name;
	float age;
	char owner;
};
typedef struct dog dog_t;

#endif /*DOG_H*/
