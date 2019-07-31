#include "holberton.h"
#include <unistd.h>

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

