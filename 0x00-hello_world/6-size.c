#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
    printf("Size of char is %d bytes\n", sizeof(char));
    printf("Size of int is %d bytes\n", sizeof(int));
    printf("Size of long is %d bytes\n", sizeof(long int));
    printf("Size of long long is %d bytes\n", sizeof(long long int));
    printf("Size of float is %d bytes\n", sizeof(float));

    return 0;
}
