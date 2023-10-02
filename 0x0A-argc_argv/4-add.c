#include <stdio.h>
#include <stdlib.h>
/**
* main - adds the arguments if they are ints
* @argc: int
* @argv: char
* Return: 0 if the the args are ints
*/

int main(int argc, char *argv[])
{
	int i;

	int d;

	int sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d]; d++)
		{

			if (argv[i][d] < '0' || argv[i][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);







}
