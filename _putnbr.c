#include "main.h"

/**
 * _putnbr - print or len number.
 * @a: integer
 * @isToPut : isToPut
 * Return: nb char of n
 */
int _putnbr(unsigned long int a, bool isToPut)
{
	int len = 0;

	if (a / 10)
		len += _putnbr(a / 10, isToPut);
	len += isToPut ? _putchar(a % 10 + '0') : 1;
	return (len);
}

/**
 * _putd - print number.
 * @n: integer
 * @flags : flags
 * Return: nb char of n
 */
int _putd(long int n, t_flag flags)
{
	unsigned long int a = n;
	int len = 0, lenNbr;
	char sign = '\0';

	if (n < 0)
	{
		sign = '-';
		a = -a;
	}
	else if (flags.plus)
		sign = '+';
	else if (flags.spc)
		sign = ' ';
	lenNbr = _putnbr(a, false);
	len = flags.prcs > lenNbr ? flags.prcs : lenNbr;
	len += sign ? 1 : 0;
	if ((flags.zero && sign) || (flags.isPrcs && sign))
		_putchar(sign);
	while (!flags.bar && len < flags.width)
		len += _putchar(flags.zero && !flags.isPrcs ? '0' : ' ');
	while (flags.prcs > lenNbr)
		_putchar('0'), flags.prcs--;
	if (!flags.zero && sign && !flags.isPrcs)
		_putchar(sign);
	if ((flags.isPrcs && !flags.prcs && n) || flags.prcs || !flags.isPrcs)
		_putnbr(a, true);
	else
		len--;
	while (len < flags.width)
		len += _putchar(flags.zero && !flags.isPrcs ? '0' : ' ');
	return (len);
}
