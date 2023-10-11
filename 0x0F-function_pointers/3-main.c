#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* main - check the code
* @argc: number of args
* @argv: args
* Return: 0 on sucess
*/
int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(89);
	}


	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}


	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
