#include "main.h"
/**
 * _putNonPrintable- puts non printable
 * @str: str
 * @flags: flags
 * Return: nb char printed.
 */

int _putNonPrintable(char *str, t_flag *flags)
{
	int len, i;
	char *HexChar;
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
		if (_isprintable(*ptr))
			i -= _putchar(*ptr);
		else
		{
			HexChar = _uitoa_base(*ptr, 16);
			_to_upper(HexChar);
			i -= _printf("\\x%s%s", (_strlen(HexChar) == 1 ? "0" : ""), HexChar);
			free(HexChar);
		}
		ptr += 1;
	}
	while (flags && len < flags->width)
		len += _putchar(' ');
	return (len);
}
