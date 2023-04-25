#include "main.h"
/**
 * _putbase- _puts in base
 * @n: nb to convert and put
 * @flags : flags
 * @base : new base
 * Return: nb char printed.
 */
int _putbase(unsigned long int n, char base, t_flag flags)
{
	char *result;
	int len = 0;

	if (base == 'b')
		base = 2;
	else if (base == 'u')
		base = 10;
	else if (base == 'o')
		base = 8;
	else if (base == 'x' || base == 'X')
		base = 16;
	result = _uitoa_base(n, base);
	if (base == 'X')
		_to_upper(result);
	if (flags.sharp)
		len += _puts(base == 'X' ? "0X" : "0x");
	len += _puts(result);
	free(result);
	return (len);
}
