#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}

putchar('\n');

return 0;
}
