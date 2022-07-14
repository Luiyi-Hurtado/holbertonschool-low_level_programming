#ifndef _3_CALC_H_
#define _3_CALC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* macros valores constantes */
#define ERROR_MESSAGE ("ERROR\n")
#define EXIT_BY_ZERO (100)
#define EXIT_NULL_OPERATOR (99)
#define EXIT_INVALID_ARG (98)
#define FORMAT_RESULT ("%d\n")

/* prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

/* macros functions */
#define THROW_ERROR(CONDITIONAL, ERROR_TYPE, EXIT_CODE) \
do {							\
	if (CONDITIONAL)				\
	{						\
		printf(ERROR_TYPE);			\
		exit(EXIT_CODE);			\
	}						\
} while (0)

#endif /* _3_CALC_H_ */
