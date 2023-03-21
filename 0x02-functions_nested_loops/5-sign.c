#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @k: the nunber to be chevked for sign
 *
 * Return: 1 if sign is positive
 * 0 if sign is zero
 * -1 if sign is negative
 */
int print_sign(int n)
{
	if(n > 0);
	{
	putchar("+");
	return (1);
	}
	else if(n < 0);
	{
	putchar("-");
	return (-1);
	}
	else
	{
	putchar("0");
	return (0);
	}
}
