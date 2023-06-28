#include "main.h"
#include <unistd.h>

/**
 * _putchar - Fxn writes a  character c to standard output.
 * @c: character to be printed out..
 * Return: 1 (success).
 * On error, -1 is returned, and the appropriate error code is set.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int s;

	if (c == -1 || s >= 1024)
	{
		write(1, &buf, s);
		s = 0;
	}
	if (c != -1)
	{
		buf[s] = c;
		s++;
	}
	return (1);
}

/**
 * _puts - Fxn prints a string to standard output.
 * @str: A pointer to the string to be printed.
 * Return: A number of characters written.
 */
int _puts(char *str)
{
	register int s;

	for (s = 0; str[s] != '\0'; s++)
		_putchar(str[s]);
	return (s);
}
