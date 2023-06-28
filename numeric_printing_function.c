#include "main.h"

/**
 * print_int - fxn that prints an integer
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags which determines
 * if a flag is passed to the _printf fxn
 * Return: number of char printed
 */
int print_int(va_list l, flags_t *f)
{
	int s = va_arg(l, int);
	int result = count_digit(s);

	if (f->space == 1 && f->plus == 0 && s >= 0)
		result += _putchar(' ');
	if (f->plus == 1 && s >= 0)
		result += _putchar('+');
	if (s <= 0)
		result++;
	print_number(s);
	return (result);
}

/**
 * print_unsigned - fxn that prints an unsigned integer
 * @l: list of arguments from _printf
 * @f: pointer to the struct flags which determines
 * if a flag is passed to the _printf fxn
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int o = va_arg(l, unsigned int);
	char *string = convert(o, 10, 0);

	(void)f;
	return (_puts(string));
}

/**
 * print_number- helper fxn that will loop through
 * an integer and then prints all its digits
 * @n: integer that will be printed
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		a = -n;
	}
	else
		a = n;

	if (a / 10)
		print_number(a / 10);
	_putchar((a % 10) + '0');
}

/**
 * count_digit -fxn that will return number of digits in an integer
 * in the _printf fxn
 * @i: integer that will be evaluated
 * Return: the number of digits
 */
int count_digit(int i)
{
	unsigned int s = 0;
	unsigned int o;

	if (i < 0)
		o = i * -1;
	else
		o = i;
	while (o != 0)
	{
		o /= 10;
		s++;
	}
	return (s);
}
