#include "3-calc.h"

int op_add(int i1, int i2);
int op_sub(int i1, int i2);
int op_mul(int i1, int i2);
int op_div(int i1, int i2);
int op_mod(int i1, int i2);

/**
 * op_add - sum of
 *
 * @i1: first nr
 *
 * @i2: second nr
 *
 * Return: always 0
 */

int op_add(int i1, int i2)
{
	return (i1 + i2);
}

/**
 * op_sub - diff of
 *
 * @i1: first nr
 *
 * @i2: second nr
 *
 * Return: always 0
 */

int op_sub(int i1, int i2)
{
	return (i1 - i2);
}

/**
 * op_mul - multiply
 *
 * @i1: first nr
 *
 * @i2: second nr
 *
 * Return: always 0
 */

int op_mul(int i1, int i2)
{
	return (i1 * i2);
}

/**
 * op_div - devide
 *
 * @i1: first nr
 *
 * @i2: second nr
 *
 * Return: always 0
 */

int op_div(int i1, int i2)
{
	return (i1 / i2);
}

/**
 * op_mod - remainder of div
 *
 * @i1: first nr
 *
 * @i2: second nr
 *
 * Return: always 0
 */
/*CC*/
int op_mod(int i1, int i2)
{
	return (i1 % i2);
}
