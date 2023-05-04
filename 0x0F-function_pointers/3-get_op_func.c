#include "3-calc.h"

/**
 * get_op_func - function to perform
 *
 * @s: passed argument
 *
 * Return: always 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int in = 0;

	while (ops[in].op != NULL && *(ops[in].op) != *s)
			in++;

	return (ops[in].f);
}
