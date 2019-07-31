#include "holberton.h"

/**
 *unsign_recur_hexa_UP - print unsigned hexa number in uppercase
 *@n: given argument
 *
 *Return: the number of digit printed
 */
int unsign_recur_hexa_UP(unsigned int n)
{
	int j = 0;

	if (n > 15)
	{
		j += unsign_recur_hexa_UP(n / 16);
	}
	if (n % 16 > 9)
		j += _putchar(n % 16 - 10 + 'A');
	else
		j += _putchar(n % 16 + '0');
	return (j);
}

/**
 *print_hexa_UP - print unsigned hexadecimal number in uppercase
 *@args: given argument
 *
 *Return: the number of digit printed
 */
int print_hexa_UP(va_list args)
{
	int j = 0;
	unsigned int n = va_arg(args, int);

	j = unsign_recur_hexa_UP(n);
	return (j);
}
