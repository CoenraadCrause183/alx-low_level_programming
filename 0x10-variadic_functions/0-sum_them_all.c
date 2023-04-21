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
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, n);

	va_end(ap);

	return(sum);
}
