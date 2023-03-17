#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
int n;
int last_digit;

srand(time(NULL)); 

n = rand() - RAND_MAX / 2;

last_digit = n % 10;

printf("Last digit of %d is ", n);
if (last_digit > 5)
{
printf("%d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("%d is %d and is 0\n", n, last_digit);
}
else (last_digit < 6 && last_digit != 0)
{
printf("%d is %d and is less than 6 and not 0\n", n, last_digit);
}

return (0);
}

