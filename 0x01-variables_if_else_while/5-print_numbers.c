#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void) {
char digit = '0';

while (digit <= '9') {
putchar(digit);
digit++;
}

putchar('\n');

return (0);
}

