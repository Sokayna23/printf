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
 * _puts- swap
 * @str: str
 * @format: format
 * Return: nb char printed.
 */
int _puts(char *str, char format)
{
	int len = 0;
	char *STR;

	if (!str)
		return (_puts("(null)", format));
	if (format == 's')
	{
		while (*str)
		{
			len += _strlen(str);
			if (len >= BUFFER_SIZE)
			{
				write(1, str, BUFFER_SIZE);
				str += BUFFER_SIZE;
			}
			else
			{
				write(1, str, len);
				str += len;
			}
		}
	}
	else
	{
		while (*str)
		{
			if (_isprintable(*str))
				len += write(1, str, 1);
			else
			{
				STR = _uitoa_base(*str, 'X');
				len += _printf("\\x%s%s", (_strlen(STR) == 1 ? "0" : "") ,STR);
			}
			str += 1;
		}
	}
	return (len);
}
