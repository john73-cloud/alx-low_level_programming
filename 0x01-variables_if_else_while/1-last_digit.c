#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 */
int main(void)
{
	int n;
	int m = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (m>5)
	{
		printf("Last digit of %d is %d and is greater than 5",n,m);
	}
	if (m == 0)
        {
                printf("Last digit of %d is %d and is 0",n,m);
        }
	if (m<6 && m!=0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0",n,m);
        }
	return (0);
}
