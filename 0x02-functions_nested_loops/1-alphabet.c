#include <stdio.h>

void print_alphabet(void);
{
char letter = 'a';
for (letter = 'a'; letter <= 'z'; ++letter)
{
putchar(letter);
}
putchar('\n');
return (0);
}
