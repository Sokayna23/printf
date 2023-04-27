#include "main.h"
/**
 * getConversion - getConversion
 * @format: format string
 * @args: arguments
 * @flags : flags
 * Return: legth
 */
int getConversion(const char *format, va_list args, t_flag *flags)
{
	int length = 0;

	if (*format == 'c')
		length = _putc(va_arg(args, int), *flags);
	else if ((*format == 's'))
		length = _puts(va_arg(args, char *), flags);
	else if ((*format == 'S'))
		length = _putNonPrintable(va_arg(args, char *));
	else if (*format == 'd' || *format == 'i')
		length = _putd(_va_arg(args, flags->lenMod), *flags);
	else if (_isinstr("buoxX", *format))
		length = _putbase(_uva_arg(args, flags->lenMod), *format, *flags);
	else if (*format == 'p')
		length = _putAddress(va_arg(args, unsigned long int), flags);
	else if (*format == '%')
		length = _putchar(*format);
	else if (flags->lenMod)
		length += _putchar('%');
	else
		return (0);
	return (length);
}
