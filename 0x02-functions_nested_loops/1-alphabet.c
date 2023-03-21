#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
void print_alphabet(void)
{
char letter = 'a';
for (letter = 'a'; letter <= 'z'; ++letter)
{
putchar(letter);
}
putchar('\n');
}
