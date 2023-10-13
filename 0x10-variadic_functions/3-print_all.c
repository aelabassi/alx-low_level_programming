#include "variadic_functions.h"

/**
 * print_all - prints all types
 * @format: const pointer to a const char
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0, s = 0;
	char *p;

	va_start(args, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (s)
			{ case 1: printf(", "); }
			s = 1;
			printf("%c", va_arg(args, int));
			break;
			case 'i':
			switch (s)
			{ case 1: printf(", "); }
			s = 1;
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			switch (s)
			{ case 1: printf(", "); }
			s = 1;
			printf("%f", va_arg(args, double));
			break;
		case's':
			switch (s)
			{ case 1: printf(", "); }
			s = 1;
			p = va_arg(args, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("(nil)");
			break; }
		j++;
	}
	printf("\n");
	va_end(args);
}
