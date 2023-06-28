#include "main.h"

/**
 * get_flag - Enables flags if _printf
 * encounters a flag modifier in the format string.
 * @s: Character holding the flag specifier.
 * @f: Pointer to the flags_t struct in which the flags are turned on.
 * Return: 1 if a flag has been enabled, otherwise 0.
 */
int get_flag(char s, flags_t *f)
{
	int flag_enabled = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			flag_enabled = 1;
			break;
		case ' ':
			f->space = 1;
			flag_enabled = 1;
			break;
		case '#':
			f->hash = 1;
			flag_enabled = 1;
			break;
	}

	return (flag_enabled);
}
