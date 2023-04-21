#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if n is greater than 5, equal to 0 or less than 6
 *
 * Return: Always 0 (Success)
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	}
	if (i == 0)
        {
                printf("Last digit of %d is %d and is 0\n", n, i);
        }
	else
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);
        }
	return (0);
}
