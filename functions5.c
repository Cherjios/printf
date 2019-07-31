#include "holberton.h"
/**
 *unsign_recur_octal - print unsigned octal number
 *@n: given argument
 *
 *Return: the number of digit printed
 */
int unsign_recur_octal(unsigned int n)
{
	int j = 0;

	if (n > 7)
		j += unsign_recur_octal(n / 8);
	j += _putchar(n % 8 + '0');
	return (j);
}

/**
 *print_octal - print unsigned octal number
 *@args: given argument
 *
 *Return: the number of digit printed
 */
int print_octal(va_list args)
{
	int j = 0;
	unsigned int n = va_arg(args, int);

	j = unsign_recur_octal(n);
	return (j);
}

/**
 *unsign_recur_hexa - print unsigned hexa number
 *@n: given argument
 *
 *Return: the number of digit printed
 */
int unsign_recur_hexa(unsigned int n)
{
	int j = 0;

	if (n > 15)
	{
		j += unsign_recur_hexa(n / 16);
	}
	if (n % 16 > 9)
		j += _putchar(n % 16 - 10 + 'a');
	else
		j += _putchar(n % 16 + '0');
	return (j);
}

/**
 *print_hexa - print unsigned hexadecimal number
 *@args: given argument
 *
 *Return: the number of digit printed
 */
int print_hexa(va_list args)
{
	int j = 0;
	unsigned int n = va_arg(args, int);

	j = unsign_recur_hexa(n);
	return (j);
}
