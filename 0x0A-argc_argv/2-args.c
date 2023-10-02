#include <stdio.h>

/**
 * main - check the code
 * @argc: an int, number of arguments
 * @argv: char, arguments
 * Return: Always 0.
*/

int main(int argc, char *argv[])
{

		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}


	return (0);
}
