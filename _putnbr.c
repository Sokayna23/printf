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
	int len = 0;
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
	len += _putnbr(a, false);
	len += sign ? 1 : 0;
	while (!flags.zero && len < flags.width)
		len += _putchar(' ');
	_putchar(sign);
	while (len < flags.width)
		len += _putchar('0');
	_putnbr(a, true);
	return (len);
}
