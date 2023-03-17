#include <stdio.h>

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

return 0;
}






