#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
    int n;
    int last_digit;

    srand(time(NULL));

    n = rand() - RAND_MAX / 2;

    last_digit = abs(n) % 10;

    printf("Last digit of %d is ", n);
    if (last_digit > 5)
    {
        printf("%d and is greater than 5\n", last_digit);
    }
    else if (last_digit == 0)
    {
        printf("%d and is 0\n", last_digit);
    }
    else (last_digit < -1)
    {
        printf("%d and is less than 6 and not 0\n", last_digit);
    }

    return (0);
}
