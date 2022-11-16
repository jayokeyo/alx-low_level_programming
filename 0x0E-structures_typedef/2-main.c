#include <stdio.h>
#include "dog.h"
/**
 * main - check the code
 * Return: Always 0
 */
int main(void)
{
	dog_t my_dog;

	my_dog.name = "Tommy";
	//my_dog.owner = "Bob";
	my_dog.age = 3.5;
	printf("My name is %s, and I am %s :) - Woof!\n", my_dog.name, my_dog.owner);
	return (0);
}
