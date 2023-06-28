#include "main.h"

/**
 * print_string - Prints each character of a string.
 * @l: Lists  arguments from _printf fxn.
 * @f: Pointer to the flags struct
 * which determines if a flag is passed to _printf.
 * Return: The number of characters printed.
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

	(void)f;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - Fxn that prints a character.
 * @l: Lists arguments from the  _printf fxn.
 * @f: Pointer to the flags struct
 * which determines if a flag is passed to _printf.
 * Return: The number of characters printed.
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
