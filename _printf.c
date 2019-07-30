#include <stdarg.h>
#include "holberton.h"
/**
*_printf-Own Printf function
*
*@format: Int Value
*Return: Int value
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0, counter = 0;

	format_opt data_t[] = {
			{"c", print_c},
			{"s", print_s},
			{"%", print_mod},
			{"i", print_i},
			{"d", print_d},
			{NULL, NULL}
			};
	/* initialize valist for num number or argument*/
	va_start(args, format);
	/* access all the argument assigned to valist*/
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
		counter += _putchar(format[i]);
		continue;
		}
		for (j = 0; data_t[j].type; j++)
		{
			if (*data_t[j].type == format[i + 1])
			{
				counter += data_t[j].f(args);
				break;
			}
		}
		i++;
		if (data_t[j].type == NULL)
		{
			counter += _putchar('%');
			counter += _putchar(format[i]);
		}
	}
	va_end(args);
	return (counter);
}
