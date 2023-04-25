#include "main.h"
/**
 * _putbase- _puts in base
 * @n: nb to convert and put
 * @flags : flags
 * @toBase : new base
 * Return: nb char printed.
 */
int _putbase(unsigned long int n, char toBase, t_flag flags)
{
	char *result;
	int len = 0;
	int base = 10;

	if (toBase == 'b')
		base = 2;
	else if (toBase == 'u')
		base = 10;
	else if (toBase == 'o')
		base = 8;
	else if (toBase == 'x' || toBase == 'X')
		base = 16;
	result = _uitoa_base(n, base);
	if (toBase == 'X')
		_to_upper(result);
	if (flags.sharp && base == 16)
		len += _puts(toBase == 'X' ? "0X" : "0x");
	else if (flags.sharp && base == 8)
		len += _puts("0");
	len += _puts(result);
	free(result);
	return (len);
}
