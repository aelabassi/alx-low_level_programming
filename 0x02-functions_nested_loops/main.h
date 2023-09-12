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
int _islower(int c);

/**
 * _isalpha - checks for alphabetic charater
 *@c: integer
 *
 * Return: return 1 if c is alphabetic, 0 otherwise
*/
int _isalpha(int c);

/**
 * print_sign - check the sign of an integer
 *@n: integer
 *
 * Return:  returns 1, 0, -1
*/
int print_sign(int n);

/**
 * _abs - absolute value of an int
 *@int: int
 *
 * Return: return a postive value
*/
int _abs(int);

/**
 * print_last_digit - primts te last digit on an int
 *@int: int to extract the last digit from
 *
 * Return: the last digit
*/
int print_last_digit(int);

/**
 * jack_bauer - prints the every of minute of JB
*/
void jack_bauer(void);

/**
 * times_table - prints the 9 times table
*/
void times_table(void);

/**
 * add - adds two integers
 *@int: first int
 *@int: second int
 *
 * Return: returns the sum
*/
int add(int, int);

/**
 * print_to_98 - prints natural numbers from n to 98
 *@n: natural number
*/
void print_to_98(int n);

#endif /* _MAIN_H */
