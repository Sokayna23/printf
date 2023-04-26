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
			getFlags(&format, &flags);
			if (*format == 'c')
				length += _putchar(va_arg(args, int));
			else if ((*format == 's'))
				length += _puts(va_arg(args, char *));
			else if ((*format == 'S'))
				length += _putNonPrintable(va_arg(args, char *));
			else if (*format == 'd' || *format == 'i')
				length += _putd(_va_arg(args, flags.lenMod), flags);
			else if (_isinstr("buoxX", *format))
				length += _putbase(_uva_arg(args, flags.lenMod), *format, flags);
			else if (*format == 'p')
				length += _putAddress(va_arg(args, unsigned long int), &flags);
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

/**
 * getConversion - getConversion
 */
void getConversion(void)
{

}
