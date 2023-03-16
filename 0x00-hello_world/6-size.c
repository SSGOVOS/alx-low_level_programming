#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and run on.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	printf("The size of char is %zu bytes\n", sizeof(char));
    printf("The size of int is %zu bytes\n", sizeof(int));
    printf("The size of long is %zu bytes\n", sizeof(long int));
    printf("The size of long long is %zu bytes\n", sizeof(long long int));
    printf("The size of float is %zu bytes\n", sizeof(float));

    return 0;
}
