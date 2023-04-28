#include "main.h"
#include <string.h>
/**
 * _printf - Produces output
 * @format: A character string
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	t_flag flags;
	int length = 0;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	length = 0;
	if (!format || (*format == '%' && !format[1]))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			resetFlags(&flags);
			getFlags(&format, &flags, args);
			if (_isinstr("lhcrRsSdibuoxXp%", *format))
				length += getConversion(format, args, &flags);
			else if (*format)
				length += write(1, format - 1, 2);
			else
				return (-1);
		}
		else
			length += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (length);
}
