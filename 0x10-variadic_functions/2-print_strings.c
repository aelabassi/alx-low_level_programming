#include "variadic_functions.h"

/**
 * print_strings - prints strings separated
 * @separator: pointer to const char
 * @n: const non negative int
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;

	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
		{
			printf("%s", separator);
			ptr = va_arg(list, char *);
			printf("%s", (ptr == NULL) ? "(nil)" : ptr);
		}
	}
	va_end(list);
	printf("\n");
}
