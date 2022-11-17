#ifndef OP_H
#define OP_H

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/**
 * struct op - struct data type
 * @op: the operator
 * @f: the function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /*OP_H*/
