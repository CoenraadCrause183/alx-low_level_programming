#include "variadic_functions.h"

/**
 * print_strings - print str
 *
 * @separator: str to print
 *
 * @n: str to function
 *
 * @...: nr of str to print
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str1;
	unsigned int i1;

	va_start(strs, n);

	for (i1 = 0; i1 < n; i1++)
	{
		str1 = va_arg(strs, char*);

		if (str1 == NULL)
			printf("(nil)");
		else
			printf("%s", str1);

		if (i1 != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strs);
}
