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
*
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
int print_i(va_list args);
int print_d(va_list args);
int print_number(int n);
int rot_13(va_list args);
int print_rev(va_list args);
int unsign_recursive(unsigned int n);
int print_deci(va_list args);
int binary_recursive(unsigned int n);
int print_binary(va_list args);
int unsign_recur_octal(unsigned int n);
int print_octal(va_list args);
int unsign_recur_hexa(unsigned int n);
int print_hexa(va_list args);
int unsign_recur_hexa_UP(unsigned int n);
int print_hexa_UP(va_list args);

#endif /*HOLBERTON_H */
