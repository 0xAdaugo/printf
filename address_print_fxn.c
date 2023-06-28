#include "main.h"

/**
 * print_address - Fxn that prints the address
 * of the input in hexadecimal format.
 * @l: Lists arguments from the _printf fxn
 * @f: Pointer to the struct flags
 * that will determine if a flag is passed to the _printf fxn
 * Return: The number of characters printed.
 */
int print_address(va_list l, flags_t *f)
{
	char *string;
	unsigned long int p = va_arg(l, unsigned long int);

	register int o = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));

	string = convert(p, 16, 1);
	o += _puts("0x");
	o += _puts(string);

	return (o);
}
