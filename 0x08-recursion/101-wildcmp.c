#include "main.h"
/**
 * str_checker - check if two strings are identical.
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	return (1);
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '\0')
	return (1);
	if (*s1 == '\0')
	return (wildcmp(s1, s2 + 1));
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
