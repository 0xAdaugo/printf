#include "main.h"

/**
 * get_print - Fxn that selects the appropriate printing fxn
 * based on conversion specifier passed to _printf.
 * @s: Character holding the conversion specifier.
 * Return: Pointer  matching the printing fxn..
 */

int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
	};
	int num_funcs = 14;

	register int o;

	for (o = 0; o < num_funcs; o++)
	{
		if (func_arr[o].c == s)
			return (func_arr[o].f);
	}
	return (NULL);
}
