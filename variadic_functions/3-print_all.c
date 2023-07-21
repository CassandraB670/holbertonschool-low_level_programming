#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;
	char current_char;

	va_start(ap, format);

	while (format && format[i])
	{
		current_char = format[i];

		switch (current_char)
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
