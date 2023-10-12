#include "variadic_functions.h"

/**
 * print_numbers - prints all the numbers in the args
 * @separator: pointer to char
 * @n: int
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	putchar('\n');


}
