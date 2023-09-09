#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - checks the last digit of an integer number n
 *
 * Return: retun 0 if the execution is successful
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and  is greater then 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}