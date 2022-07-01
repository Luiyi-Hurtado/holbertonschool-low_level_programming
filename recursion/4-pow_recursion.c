#include "main.h"
/**
 *_pow_recursion - Entry point
 *@x: is type int
 *@y: is type int
 *Description: returns the value of
 *X reised to the power of Y.
 *Return: X power of Y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
