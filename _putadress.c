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
		return (_puts("(nil)"));
	flags->sharp = true;
	if (flags->plus)
		len += _putchar('+');
	else if (flags->spc)
		len += _putchar(' ');
	flags->plus = false;
	flags->spc = false;
	len = _putbase(address, 'x', *flags);
	return (len);
}
