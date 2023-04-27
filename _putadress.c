#include "main.h"

/**
 * _putAddress- %p
 * @address: address
 * @flags : flags
 * Return: nb char printed.
 */

int _putAddress(unsigned long int address, t_flag *flags)
{
	int len = 0;

	if (address == 0)
		return (_puts("(nil)", NULL));
	flags->sharp = true;
	if (flags->plus)
		len += _putchar('+');
	else if (flags->spc)
		len += _putchar(' ');
	len += _putbase(address, 'x', *flags);
	return (len);
}
