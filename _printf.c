#include <stdarg.h>
#include "holberton.h"
/**
 *_printf-Own Printf function
 *@format: Int Value
 *
 *Return: Int value
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, counter = 0;

	format_opt data_t[] = {
		{"c", print_c}, {"s", print_s}, {"%", print_mod}, {"i", print_i},
		{"d", print_d}, {"R", rot_13}, {"r", print_rev}, {"u", print_deci},
		{"b", print_binary}, {"o", print_octal}, {"x", print_hexa},
		{"X", print_hexa_UP}, {NULL, NULL}
	};
	va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			if (_putchar(format[i]) < 0)
				return (-1);
			counter++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		for (j = 0; data_t[j].type; j++)
		{
			if (*data_t[j].type == format[i + 1])
			{
				counter += data_t[j].f(args);
				break;
			}
		}
		if (data_t[j].type == NULL)
		{
			if (_putchar(format[i]) < 0 || _putchar(format[i + 1]) < 0)
				return (-1);
			counter += 2; }
		i++;
	}
	va_end(args);
	return (counter);
}
