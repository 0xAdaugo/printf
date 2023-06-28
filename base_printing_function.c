#include "main.h"

/**
 * print_hex - Fxn that prints a number to hexadecimal base, in lowercase.
 * @l: Lists arguments from the _printf fxn
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf
 * Return: number of characters printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int s = va_arg(l, unsigned int);
	char *string = convert(s, 16, 1);
	int o = 0;

	if (f->hash == 1 && string[0] != '0')
		o += _puts("0x");
	o += _puts(string);
	return (o);
}

/**
 * print_hex_big - Fxn that prints a number to hexadecimal base, in uppercase.
 * @l: Lists arguments from the _print fxn.
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf
 * Return: number of characters printed
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int s = va_arg(l, unsigned int);
	char *string = convert(s, 16, 0);
	int o = 0;

	if (f->hash == 1 && string[0] != '0')
		o += _puts("0X");
	o += _puts(string);
	return (o);
}

/**
 * print_binary - Fxn that prints a number to base 2.
 * @l: Lists arguments from the _printf fxn
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf fxn
 * Return: number of characters printed.
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int s = va_arg(l, unsigned int);
	char *string = convert(s, 2, 0);

	(void)f;
	return (_puts(string));
}

/**
 * print_octal - Fxn that prints a number to base 8.
 * @l: Lists arguments from the _printf fxn
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf fxn
 * Return: number of characters printed.
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int s = va_arg(l, unsigned int);
	char *string = convert(s, 8, 0);
	int o = 0;

	if (f->hash == 1 && string[0] != '0')
		o += _putchar('0');
	o += _puts(string);
	return (o);
}
