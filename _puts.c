#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts- _puts printable
 * @str: str
 * Return: nb char printed.
 */

int _puts(char *str)
{
	int len;

	if (!str)
		return (_puts("(null)"));
	while (*str)
	{
		len = _strlen(str);
		if (len > BUFFER_SIZE)
		{
			write(1, str, BUFFER_SIZE);
			str += BUFFER_SIZE;
		}
		else
		{
			write(1, str, len);
			return (_strlen(str));
		}
	}
	return (_strlen(str));
}
/**
 * _putsNonPrintable- puts non printable
 * @str: str
 * Return: nb char printed.
 */

int _putsNonPrintable(char *str)
{
	int len = 0;
	char *HexChar;

	if (!str)
		return (_puts("(null)"));
	while (*str)
	{
		if (_isprintable(*str))
			len += write(1, str, 1);
		else
		{
			HexChar = _uitoa_base(*str, 'X');
			len += _printf("\\x%s%s", (_strlen(HexChar) == 1 ? "0" : ""), HexChar);
		}
		str += 1;
	}
	return (_strlen(str));
}
