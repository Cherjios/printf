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

/**
 * rot13 - helper function, print every 13th letters of the alphabet
 * @args: argument
 *
 * Description: encode a string using rot13
 * Return: return the number of digit printed
 */
int rot_13(va_list args)
{
	int i;
	int j;
	char *s = va_arg(args, char *);

	char u1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
			'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char l1[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
			'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == u1[j])
			{
				_putchar(l1[j]);
				break;
			}
		}
		if (j == 52)
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_rev - entry point
 * @args: arguments
 *
 * Description: print a string in reverse
 * Return: the number of digit printed
 */
int print_rev(va_list args)
{
	int i;
	int len = 0;
	char *s = va_arg(args, char *);

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	return (len);
}
