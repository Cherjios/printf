#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/**
*struct format-struct format
*@type: The format data
*@f: The function associated
*/

typedef struct format
{
	char *type;
	int (*f)(va_list args);

} format_opt;

/* Helper functions */

int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_mod(va_list args);

#endif /*HOLBERTON_H */
