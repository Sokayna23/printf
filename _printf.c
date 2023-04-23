#include "main.h"
/**
 * _printf - Produces output
 * @format: A character string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	va_start(args, format);
	if (!format || (*format == '%' && !format[1]))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				length += _putchar(va_arg(args, int));
			else if (*format == 's')
				length += _puts(va_arg(args, char *));
			else if (*format == '%')
				length += _putchar(*format);
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
