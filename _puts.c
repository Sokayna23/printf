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
	int len = 0;

	if (!str)
		return (_puts("(null)"));
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
	return (len);
}
