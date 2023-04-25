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
	char *ptr;

	ptr = str;
	if (!ptr)
		return (_puts("(null)"));
	while (*ptr)
	{
		len = _strlen(ptr);
		if (len >= BUFFER_SIZE)
		{
			write(1, ptr, BUFFER_SIZE);
			ptr += BUFFER_SIZE;
		}
		else
		{
			write(1, ptr, len);
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
/**
 * _puts_address - prints address of a variable
 * @ptr: a pointer 
 * Return: number of characters printed
 */
int _puts_address(void *ptr)
{
	char hex_str[17];
	int i;

	for (i = 0; i <= 15; i++)
	{
		if (ptr[i] < 10)
			hex_str[i] = '0' + ptr[i];
		else
			hex_str[i] = 'a' + ptr[i] - 10;
		_putchar(hex_str[i]);
	}
	hex_str[16] = '\0';
	return (_strlen(hex_str));
}
