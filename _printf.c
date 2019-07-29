#include <stdarg.h>
#include "holberton.h"

/**
*_printf-Own Printf function
*
*@format: Int Value
*
*Return: Int value
*/

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0;
	int counter = 0;

	format_opt data_t[] = {
			{"c", print_c},
			{"s", print_s},
			{"%", print_mod},
	/*		{"i",print_i},
			{"d",print_d},
			{"b",},
			{"u",},
			{"o",},
			{"x",},
			{"X",},
			{"S",},
			{"p",},
			{"r",},
			{"R",},*/
			{NULL, NULL}
			};
	/* initialize valist for num number or argument*/
	va_start(args, format);

	/* access all the argument assigned to valist*/

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format && format[i])
	{
		while (data_t[j].type)
		{
			if (*data_t[j].type == format[i])
			{
				data_t[j].f(args);
				counter += data_t[j].f(args);
		
			}
			j++;
		}
		j = 0;
		i++;
	}
	
	return (counter);
	/*clen memory reserved for valist */

	va_end(args);
}
