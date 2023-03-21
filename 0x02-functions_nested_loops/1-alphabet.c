#include "main.h"
/**
 * print_alphabet - Entry point ,this prints alphabet
 * in lowercase
 *
 * Return: Always 0.
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
