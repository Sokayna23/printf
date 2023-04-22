#include "main.h"
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - Produces output
 * @format: A character string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length, C, l;
	char *s;

	va_start(args, format);
	length = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				C = va_arg(args, int);
				write(1, &C, 1);
				length++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				l = strlen(s);
				write(1, s, l);
				length = length + l;
			}
			else if (*format == '%')
			{
				write(1, format, 1);
				length++;
			}
			else
			{
				write(1, format - 1, 2);
				length = length + 2;
			}
		}
	else
	{
		write(1, format, 1);
		length++;
	}
	format++;
}
va_end(args);
return (length);
}
