#include "main.h"
/**
 *Prime_Number - Entry point
 *@n: is type int
 *@i: is type int
 *Description: prime number
 *Return: int primer number
 */
int Prime_Number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);

	return (Prime_Number(n, i - 1));
}
/**
 *is_prime_number - Entry point
 *@n: is type int
 *Description: eturns 1 if the input integer is a prime
 *number, otherwise return 0.
 *Return: 1 if the input is a prime
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (Prime_Number(n, n / 2));
}
