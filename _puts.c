#include "main.h"

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
