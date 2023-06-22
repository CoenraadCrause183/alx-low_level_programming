#include "variadic_functions.h"

/**
 * sum_them_all - sum of them all
 *
 * @n: nr of parameters
 *
 * @...: paramets to add
 *
 * Return: always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va1;
	unsigned int i1, sum = 0;

	va_start(va1, n);

	for (i1 = 0; i1 < n; i1++)
		sum += va_arg(va1, int);

	va_end(va1);
/*CC*/
	return(sum);
}
