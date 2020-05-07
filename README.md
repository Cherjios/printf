# _printf 

## Project details:

Write your own printf function.

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called holberton.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

## More Info

Authorized functions and macros

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

## Function prototype 
int _printf (const char *format, ...)

## Syntax 
%[flags] [width] [.precision][length][type]

## Format specification
	c - Single character
	s - String of characters
	d or i- Signed decimal integer
	b - Binary
	u - Unsigned decimal integer
	o - unsigned octal
	x - unsigned hexadecimal integer (Lowercase)
	X - unsigned hexadecimal integer (Uppercase)
	S - unicode string
	p - pointer address
	% - %% will write single % character
	r - Reversed string
	R - Rot 13'ed string

## Flags
	# Use with o, x or X specifiers, the value is proceded with 0,0x, 0X respectively for nonzero value
	0 Left pads number with zeroes
	+ Using sign '+' for positive numbers
	space Blank space inserted befores the value
	- Left justify with given field width

## Length modifiers
	Length 	di	u o x X
	l	long 	unsigned long
	h 	short 	unsigned short

	

## Files are compliled as fallow:

$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c


## Authors

Hanh Nguyen and Sergio Lopez
