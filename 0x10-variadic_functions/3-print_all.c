#include "variadic_functions.h"

/*
 * print_all - prints all
 *
 * @format: arg passted to func
 *
 */

void print_all(const char * const format, ...)
{
	int i1 = 0;
	char *str1, *str2 = "";

	va_list lst1;

	va_start(lst1, format);

	if (format)
	{
		while (format[i1])
		{
			switch (format[i1])
			{
				case 'c':
					printf("%s%c", str2, va_arg(lst1, int));
					break;
				case'i':
					printf("%s%d", str2, va_arg(lst1, int));
                                        break;
				case'f':
					printf("%s%f", str2, va_arg(lst1, double));
                                        break;
				case's':
					str1 = va_arg(lst1, char*);
					if (!str1)
						str1 = "(nil)";
					printf("%s%s", str2, str1);
					break;
				default:
					i1++;
					continue;
			}
			str2 = ",";
			i1++;
		}
	}
	printf("\n");
	va_end(lst1);
}
