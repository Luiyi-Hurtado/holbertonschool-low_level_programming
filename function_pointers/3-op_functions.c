#include "3-calc.h"

/**
 *op_add - addition
 *@a: num1
 *@b: num2
 *Return: add
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substration
 *@a: num1
 *@b: num2
 *Return: sum
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplication
 *@a: num1
 *@b: num2
 *Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - div
 *@a: num1
 *@b: num2
 *Return: div
 */
int op_div(int a, int b)
{
	THROW_ERROR(b == 0, ERROR_MESSAGE, EXIT_BY_ZERO);
	return (a / b);
}

/**
 *op_mod - modulus
 *@a: num1
 *@b: num2
 *Return: mod
 */
int op_mod(int a, int b)
{
	THROW_ERROR(b == 0, ERROR_MESSAGE, EXIT_BY_ZERO);
	return (a % b);

}
