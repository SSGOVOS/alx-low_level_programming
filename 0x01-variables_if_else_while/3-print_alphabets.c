#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
char c;

/* Print lowercase alphabet */
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}

/* Print uppercase alphabet */
for (c = 'A'; c <= 'Z'; ++c)
{
putchar(c);
}

putchar('\n');

return (0);
}






