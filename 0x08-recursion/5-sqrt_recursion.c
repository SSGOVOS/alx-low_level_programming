#include "main.h"

/**
 * check - checks for the square root
 * @a:int
 * @b:int
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	int i;
	for (i = 1; i <= n / 2; i++)
	{
	int sqr = i * i;
	if (sqr == n)
	{
	return (i);
	}
	else if (sqr > n)
	{
	return (-1);
	}
	}
	return (-1);
	}
}
