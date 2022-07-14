#include "3-calc.h"

/**
 *get_op_func - return get_func
 *@s: pointer sing
 *op_add - addition
 *op_sub - substractino
 *op_mul - multiplication
 *op_div - division
 *op_mod - modulation
 *
 * Return: return get_func
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i += 1;
	}
	return (NULL);
}
