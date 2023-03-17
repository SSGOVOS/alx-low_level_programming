#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	char c;
	char C;
	for(c = 'a'; c <= 'z'; ++c)
        for(C = 'A'; C <= 'Z'; ++C)
	{
		putchar(c);
	}
	{
		putchar(C);
	}
		putchar('\n');
		return 0;
	}
