#include "variadic_functions.h"

/**
 * print_numbers - print numders
 *
 * @n: nr of int
 *
 * @...: numbers to print
 *
 * @separator: str between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num1;
	unsigned int i1;

	va_start(num1, n);

	for (i1 = 0; i1 < n; i1++)
	{
		printf("%d", va_arg(num1, int));

		if (i1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
/*CC*/
	va_end(num1);
}
