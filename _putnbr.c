#include "main.h"

/**
 * _putnbr - print or len number.
 * @n: integer
 * @isToPut : isToPut
 * Return: nb char of n
 */
int _putnbr(long int n, bool isToPut)
{
	unsigned long int a = n;
	int len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		a = -a;
	}
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
	int len = 0;

	if (n < 0)
	{
		len = _putchar('-');
		a = -a;
	}
	else if (flags.plus)
		len = _putchar('+');
	else if (flags.spc)
		len = _putchar(' ');
	len += _putnbr(a, false);
	while (len < flags.width)
		len += _putchar(flags.zero ? '0' : ' ');
	_putnbr(a, true);
	return (len);
}
