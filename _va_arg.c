#include "main.h"
/**
 * _va_arg - _va_arg
 * @ap: va_arg
 * @type: type l or h
 * Return: va_arg conversion
 */
long _va_arg(va_list ap, char type)
{
	if (type == '\0')
		return (va_arg(ap, int));
	if (type == 'h')
		return ((short)va_arg(ap, int));
	if (type == 'l')
		return (va_arg(ap, long));
	return (0);
}

/**
 * _uva_arg - _uva_arg
 * @ap: va_arg
 * @type: type l or h
 * Return: va_arg conversion
 */
unsigned long _uva_arg(va_list ap, char type)
{
	if (type == '\0')
		return (va_arg(ap, unsigned int));
	if (type == 'h')
		return ((unsigned short)va_arg(ap, unsigned int));
	if (type == 'l')
		return (va_arg(ap, unsigned long));
	return (0);
}
