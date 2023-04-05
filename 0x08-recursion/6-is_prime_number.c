#include "main.h"

/**
 * check - checks to see if number is prime
 * @a:int
 * @b:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	for (int i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	{
	return (0);
	}
	}
	return (1);
}

