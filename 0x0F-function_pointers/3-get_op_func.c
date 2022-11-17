#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - evaluates the right function to use
 * @s: operator passed by user
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	do
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	while (ops[i].op);
	return (NULL);
}
