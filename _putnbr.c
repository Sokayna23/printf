#include "main.h"

/**
 * _putnbr - print number.
 * @n: integer
 * @flags : flags
 * Return: nb char of n
 */
int _putnbr(long int n, t_flag flags)
{
	unsigned int a = n;
	int len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		a = -a;
	}
	else if (flags.plus)
		len += _putchar('+');
	else if (flags.spc)
		len += _putchar(' ');
	flags.plus = false;
	flags.spc = false;
	if (a / 10)
		len += _putnbr(a / 10, flags);
	len += _putchar(a % 10 + '0');
	return (len);
}
