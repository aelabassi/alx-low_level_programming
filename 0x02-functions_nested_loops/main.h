#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <string.h>

/**
 * _putchar - prints the characters of a string
 * @c: charater to print
 *
 * Return: returns 1 on success and -1 on error
*/

int _putchar(char c);

/**
 * print_alphabet - prints alphabets in lowercase
*/

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times
*/

void print_alphabet_x10(void);

/**
 * _islower - checks if the the character is lower case ASCII
 * @c: integer, Dec representation fo an ASCII
 *
 * Return: 1 if the alphabet character is a lower case, 0 otherwise
*/
int is_lower(int c);

#endif /* _MAIN_H */
