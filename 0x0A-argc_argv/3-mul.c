#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: int, number of arguments
 * @argv: char, arguments
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int n, m, prod;

	if (argc != 3)
	{
		printf("Must have 3 arguments!\n");
		return (1);
	}
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	prod = n * m;
	printf("%d\n", prod);

	return (0);


}
