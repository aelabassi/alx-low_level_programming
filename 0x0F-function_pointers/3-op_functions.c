#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - adds two ints
 * @a: int
 * @b: int
 * Return: int
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts two ints
 * @a: int
 * @b: int
 * Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two ints
 * @a: int
 * @b: int
 * Return: int
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two ints
 * @a: int
 * @b: int
 * Return: int
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the reminder of division
 * @a: int
 * @b: int
 * Return: int
*/
int op_mod(int a, int b)
{
	return (a % b);
}
