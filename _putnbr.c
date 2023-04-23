#include "main.h"
/**
 * _putnbr - print number.
 * @n: integer
 */
int _putnbr(int n)
{
	unsigned int a = n;
	int len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		a = -a;
	}
	if (a / 10)
		len += _putnbr(a / 10);
	len += _putchar(a % 10 + '0');
	return (len);
}
