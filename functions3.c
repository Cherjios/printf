#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_number - main entry, helper function, print digit
 *@n: given digit
 *
 *Return: the number of digit printed
 */

int print_number(int n)
{
	int j = 0;

	if (n < 0)
	{
		_putchar('-');
		if (n < -9)
		{
			j += print_number(n / -10);
		}
		j += _putchar(-(n % 10) + '0');
	}
	if (n >= 0)
	{
		if (n > 9)
			j += print_number(n / 10);
		j += _putchar(n % 10 + '0');
	}
	return (j);
}
