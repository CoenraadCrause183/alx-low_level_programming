#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of
 *
 * @a: first nr
 *
 * @b: second nr
 *
 * Return: always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - diff of
 *
 * @a: first nr
 *
 * @b: second nr
 *
 * Return: always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 *
 * @a: first nr
 *
 * @b: second nr
 *
 * Return: always 0
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devide
 *
 * @a: first nr
 *
 * @b: second nr
 *
 * Return: always 0
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of div
 *
 * @a: first nr
 *
 * @b: second nr
 *
 * Return: always 0
 */

int op_mod(int a, int b)
{
	return ( a % b);
}
