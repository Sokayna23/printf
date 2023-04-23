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
	int length = 0, C;
	char *s;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				C = va_arg(args, int);
				length += write(1, &C, 1);
			}
			else if (*format == 's')
			{
				s = va_arg(args, char *);
				length += write(1, s, strlen(s));
			}
			else if (*format == '%')
				length += write(1, format, 1);
			else
				length += write(1, format - 1, 2);
		}
	else
		length += write(1, format, 1);
	format++;
}
va_end(args);
return (length);
}
