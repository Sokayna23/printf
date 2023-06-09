#include "main.h"

/**
 * _putc - writes the character c to stdout
 * @c: The character to print
 * @flags : flags
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putc(char c, t_flag flags)
{
	int len = 1;

	while (!flags.bar && len < flags.width)
		len += _putchar(' ');
	_putchar(c);
	while (len < flags.width)
		len += _putchar(' ');
	return (len);
}
