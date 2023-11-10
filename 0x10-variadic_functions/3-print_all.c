#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to func.
 *
 * Return: unnecessary as function returns void type.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sep = "", *s;

	va_list types;

	va_start(types, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(types, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(types, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(types, double));
				break;
			case 's':
				s = va_arg(types, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(types);
}
