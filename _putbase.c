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
	int len = 0, lenResult, base = 10;

	if (toBase == 'b')
		base = 2;
	else if (toBase == 'u')
		base = 10;
	else if (toBase == 'o')
		base = 8;
	else if (toBase == 'x' || toBase == 'X')
		base = 16;
	result = _uitoa_base(n, base);
	lenResult = _strlen(result);
	len = lenResult > flags.prcs ? lenResult : flags.prcs;
	if (toBase == 'X')
		_to_upper(result);
	if (flags.sharp && base == 16 && n)
		len += 2;
	else if (flags.sharp && base == 8 && n)
		len += 1;
	while (!flags.zero && len < flags.width && !flags.bar)
		len += _putchar(' ');
	if (flags.sharp && base == 16 && n)
		_puts(toBase == 'X' ? "0X" : "0x", NULL);
	else if (flags.sharp && base == 8 && n)
		_putchar('0');
	while (len < flags.width && !flags.bar)
		len += _putchar(flags.zero && !flags.isPrcs ? '0' : ' ');
	while (flags.prcs > lenResult)
		_putchar('0'), flags.prcs--;
	if ((flags.isPrcs && !flags.prcs && n) || flags.prcs || !flags.isPrcs)
		_puts(result, NULL);
	else
		len--;
	while (len < flags.width)
		len += _putchar(' ');
	free(result);
	return (len);
}
