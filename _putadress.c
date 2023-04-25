#include "main.h"

/**
 * _putsAddress- %p
 * @address: address
 * @flags : flags
 * Return: nb char printed.
 */

int _putsAddress(unsigned long int address, t_flag *flags)
{
	int len = 0;

	if (address == 0)
		return (_puts("(nil)"));
	flags->sharp = true;
	_putbase(address, 'x', *flags);
	return (len);
}
