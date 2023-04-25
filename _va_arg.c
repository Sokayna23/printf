#include "main.h"
/**
 * _va_arg - _va_arg
 * @ap: va_arg
 * @type: type l or h
 * Return: va_arg conversion
 */
long int _va_arg(va_list ap, char type)
{
	if (type == '\0')
		return (va_arg(ap, int));
	if (type == 'h')
		return (va_arg(ap, short int));
	if (type == 'l')
		return (va_arg(ap, long int));
	return (0);
}

/**
 * _uva_arg - _uva_arg
 * @ap: va_arg
 * @type: type l or h
 * Return: va_arg conversion
 */
unsigned long int _uva_arg(va_list ap, char type)
{
	if (type == '\0')
		return (va_arg(ap, unsigned int));
	if (type == 'h')
		return (va_arg(ap, unsigned short int));
	if (type == 'l')
		return (va_arg(ap, unsigned long int));
	return (0);
}
