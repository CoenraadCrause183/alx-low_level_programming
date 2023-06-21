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

	int i1 = 0;

	while (ops[i1].opp != NULL && *(ops[i1].opp) != *s)
			i1++;
/*CC*/
	return (ops[i1].f);
}
