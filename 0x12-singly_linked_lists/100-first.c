#include <stdio.h>

void first_before_main(void) __attribute__ ((constructor));

/**
 * first_before_main - prints a sentence before main
*/

void first_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
