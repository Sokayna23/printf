#include "main.h"
/**
 * _putNonPrintable- puts non printable
 * @str: str
 * Return: nb char printed.
 */

int _putNonPrintable(char *str)
{
	int len = 0;
	char *HexChar;
	char *ptr;

	ptr = str;
	if (!ptr)
		return (_puts("(null)"));
	while (*ptr)
	{
		if (_isprintable(*ptr))
			len += _putchar(*ptr);
		else
		{
			HexChar = _uitoa_base(*ptr, 'X');
			len += _printf("\\x%s%s", (_strlen(HexChar) == 1 ? "0" : ""), HexChar);
		}
		ptr += 1;
	}
	return (len);
}
