#include <stdio.h>
/**
 *main-program entry point.
 *Function that checks for lowercase character.
 *Return:0 if no error, non-zero value if error.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	} else
	{
	return (0);
	}
}

