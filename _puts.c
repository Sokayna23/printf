#include "main.h"

/**
 * _puts- _puts printable
 * @str: str
 * @flags: Flags
 * Return: nb char printed.
 */

int _puts(char *str, t_flag *flags)
{
	int len, i;
	char *ptr;

	ptr = str;
	if (!ptr)
		return (_puts("(null)", flags));
	len = _strlen(ptr);
	while (flags && len < flags->width)
		len += _putchar(' ');
	while (*ptr)
	{
		i = _strlen(ptr);
		if (i >= BUFFER_SIZE)
		{
			write(1, ptr, BUFFER_SIZE);
			ptr += BUFFER_SIZE;
		}
		else
		{
			write(1, ptr, i);
			return (len);
		}
	}
	return (len);
}
