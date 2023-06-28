#include "main.h"

/**
 * convert - Fxn that converts a number and base into a string.
 * @num: the number
 * @base: the base
 * @lowercase: The flag that indicates whether hex values need to be lowercase.
 * Return: the resulting string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buff[50]; /* @buff: stands for buffer  */
	char *pnt; /* @pnt: Stands for pointer   */

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	pnt = &buff[49];
	*pnt = '\0';
	do {
		*--pnt = rep[num % base];
		num /= base;
	} while (num != 0);

	return (pnt);
}
