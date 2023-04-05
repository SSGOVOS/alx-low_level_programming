#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i;

	if (len <= 1)
		return (1);

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}
