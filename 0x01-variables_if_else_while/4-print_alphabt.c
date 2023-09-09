#include <stdio.h>
#include <string.h>

/**
 * main - prints all alphabets in lower case except e and q
 *
 * Return: retuns 0 if everthing goes well
*/
int main(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

	size_t i;

	for (i = 0; strlen(alphabets); ++i)
	{
		if (alphabets[i] != 'q' && alphabets[i] != 'e')
		{
			putchar(alphabets[i]);
		}
	}

	putchar('\n');

	return (0);
}
