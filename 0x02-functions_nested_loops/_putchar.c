#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a string
 * @c: character to print
 *
 * Return: on sucess return 1, on error reurn -1
*/
int _putchar(char c[])
{
	return (write(1, &c, 1));
}

