#include <stdio.h>

/**
 * main - prints the size of different data types
 *
 * Return: retuns 0 if the execution is successfull
*/
int main(void)
{
	printf("Size of a char: %d", sizeof(char));
	printf("Size of an int: %d", sizeof(int));
	printf("Size of a long int: %d", sizeof(long int));
	printf("Size of a long long int: %d", sizeof(long long int));
	printf("Size of a float: %d", sizeof(float));

	return (0);
}
