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
 * Return: nb char printed.
 */
int _puts(char *str)
{
	int len;

	len = _strlen(str);
	while (*str)
		_putchar(*str++);
	return (len);
}
