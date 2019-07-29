#include "holberton.h"

/**
  *print_c: main entry, helper function, print character
  *@args- arguments from the list
  *
  *return- the number of character printed, excluding the null byte.
  */
char print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
  *print_s: main entry, helper function, print string
  *@args- arguments from the list
  *
  *return- the number of character printed, excluding the null byte.
  */
int print_s(va_list args, char *str)
{
	int i = va_arg(args, char);

	for (i = 0; str[i] != '\0'; str++)
	{
		_putchar(str[i]);
	}
	return (i);

}

/**
  *print_mod: main entry, helper function, print percent sign
  *@args- arguments from the list
  *
  *return- the number of character printed, excluding the null byte.
  */
int print_mod(va_list args)
{
	if (args == '%')
		_putchar('%');
	return (1);
}

/**
  *print_i: main entry, helper function, print integer
  *@args- arguments from the list
  *
  *return- the number of character printed, excluding the null byte.
  */

int print_i(va_list args)
{
	int n = va_arg(args, int);
	int j = 0;

	if (n > 9)
	{
		print_i(n / 10);
		j += _putchar(n % 10 + '\0');
	}
	if (n < 0)
	{
		_putchar('-');
		print_i(n / -10);
		j += _putchar(n % 10 + '\0');
	}
	return (j);
}

/**
  *print_d: main entry, helper function, print digit
  *@args- arguments from the list
  *
  *return- the number of character printed, excluding the null byte.
  */
int print_d(va_list args, int)
{
	int n = va_arg(args, int);
	int j = 0;

	if (n > 9)
	{
		print_d(n / 10);
		j += _putchar(n % 10 + '\0');
	}
	if (n < 0)
	{
		_putchar('-');
		print_d(n / -10);
		j += _putchar(n % 10 + '\0');
	return (j);
}
