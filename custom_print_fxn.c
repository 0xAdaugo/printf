#include "main.h"

/**
 * print_bigS - Fxn that prints non-printable
 * characters in the format \x followed
 * by the ASCII code value in hexadecimal (uppercase, always 2 characters).
 * @l: Lists arguments from _printf.
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf fxn
 * Return: The number of characters printed.
 */
int print_bigS(va_list l, flags_t *f)
{
	int a, o = 0;
	char *result;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (a = 0; s[a]; a++)
	{
		if (s[a] > 0 && (s[a] < 32 || s[a] >= 127))
		{
			_puts("\x");
			o += 2;
			result = convert(s[a], 16, 0);
			if (!result[1])
				o += _putchar('0');
			o += _puts(result);
		}
		else
			o += _putchar(s[a]);
	}
	return (o);
}

/**
 * print_rev - Fxn that prints a string in reverse.
 * @l: The argument from the _printf fxn
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf fxn
 * Return: The length of the printed string.
 */
int print_rev(va_list l, flags_t *f)
{
	int a = 0, o;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[a])
		a++;

	for (o = a - 1; o >= 0; o--)
		_putchar(s[o]);

	return (a);
}

/**
 * print_rot13 - Fxn that prints a string using the ROT13 cipher.
 * @l: List of arguments from th _printf fxn
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf fxn
 * Return: The length of the printed string.
 */
int print_rot13(va_list l, flags_t *f)
{
	int a, o;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (o = 0; s[o]; o++)
	{
		if (s[o] < 'A' || (s[o] > 'Z' && s[o] < 'a') || s[o] > 'z')
			_putchar(s[o]);
		else
		{
			for (a = 0; a <= 52; a++)
			{
				if (s[o] == rot13[a])
					_putchar(ROT13[a]);
			}
		}
	}

	return (a);
}

/***
 * print_percent - Fxn that prints a percent symbol
 * @l: List arguments from _printf
 * @f: Pointer to the struct flags in which we on the flags
 * Return: The number of characters printed
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
