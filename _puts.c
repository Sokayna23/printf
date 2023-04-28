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
	len = _strlen(str);
	len = (flags->isPrcs && len > flags->prcs) ? flags->prcs : len;
	i = len;
	while (flags && !flags->bar && len < flags->width)
		len += _putchar(' ');
	while (i)
	{
		if (i >= BUFFER_SIZE)
		{
			write(1, ptr, BUFFER_SIZE);
			i -= BUFFER_SIZE;
		}
		else
		{
			write(1, ptr, i);
			i = 0;
		}
	}
	while (flags && len < flags->width)
		len += _putchar(' ');
	return (len);
}
