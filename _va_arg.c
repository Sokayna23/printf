#include "main.h"

int long _va_arg(va_list ap, char type)
{
	if (type == '\0')
		return (va_arg(ap, int));
	if (type == 'h')
		return ((short)va_arg(ap, int));
	if (type == 'l')
		return (va_arg(ap, long));
	return (0);
}

unsigned int long _uva_arg(va_list ap, char type)
{
	if (type == '\0')
		return (va_arg(ap, unsigned int));
	if (type == 'h')
		return ((unsigned short)va_arg(ap, unsigned int));
	if (type == 'l')
		return (va_arg(ap, unsigned long));
	return (0);
}
