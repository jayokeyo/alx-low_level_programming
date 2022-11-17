#ifndef OP_H
#define OP_H
/**
 * struct op - struct data type
 * @op: the operator
 * @f: the function associated
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /*OP_H*/
