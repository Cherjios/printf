#include "holberton.h"
/**
  *print_c - Main entry, helper function, print character
  *@args: Arguments from the list
  *
  *Return: The number of character printed, excluding the null byte.
  */
int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 *print_s - main entry, helper function, print string
 *@args: arguments from the list
 *
 *Return: the number of character printed, excluding the null byte.
 */
int print_s(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; str++)
	{
		_putchar(str[i]);
	}
	return (i);

}

/**
 *print_mod - main entry, helper function, print percent sign
 *@args: arguments from the list
 *
 *Return: the number of character printed, excluding the null byte.
 */
int print_mod(va_list args)
{
	(void) args;
	_putchar('%');
	return (1);
}

/**
 *print_i - main entry, helper function, print integer
 *@args: arguments from the list
 *
 *Return: the number of character printed, excluding the null byte.
 */

int print_i(va_list args)
{
	int n = va_arg(args, int);
	int j = 0;

	j = print_number(n);
	return (j);
}

/**
 *print_d - main entry, helper function, print digit
 *@args: arguments from the list
 *
 *Return: the number of character printed, excluding the null byte.
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int j = 0;

	j = print_number(n);
	return (j);
}
