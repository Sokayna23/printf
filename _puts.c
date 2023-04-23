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
				len += _printf("\\x%X", *str);
			str += 1;
		}
	}
	return (len);
}
