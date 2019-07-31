#include "holberton.h"

/**
 *unsign_recursive - print unsigned decimal number
 *@n: given argument
 *
 *Return: the number of digit printed
 */
int unsign_recursive(unsigned int n)
{
	int j = 0;

	if (n > 9)
		j += unsign_recursive(n / 10);
	j += _putchar(n % 10 + '0');
	return (j);
}

/**
 *print_deci - print unsigned decimal number
 *@args: given argument
 *
 *Return: the number of digit printed
 */
int print_deci(va_list args)
{
	int j = 0;
	unsigned int n = va_arg(args, int);

	j = unsign_recursive(n);
	return (j);
}

/**
 *binary_recursive - print unsigned binary number
 *@n: given argument
 *
 *Return: the number of digit printed
 */
int binary_recursive(unsigned int n)
{
	int j = 0;

	if (n > 1)
		j += binary_recursive(n / 2);
	j += _putchar(n % 2 + '0');
	return (j);
}

/**
 *print_binary - print unsigned binary number
 *@args: given argument
 *
 *Return: the number of digit printed
 */
int print_binary(va_list args)
{
	int j = 0;
	unsigned int n = va_arg(args, int);

	j = binary_recursive(n);
	return (j);
}
