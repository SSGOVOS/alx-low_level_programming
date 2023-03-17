#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;
        int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	printf("The last digit of %d is %d\n", n, last_digit);

	return (0);
}
