#include "main.h"
/**
 * decLenBase - calculate len - new base.
 * @n: nb to convert
 * @base : new base
 * Return: lenght new base
 */
int decLenBase(unsigned long int n, int base)
{
	int len;

	len = 1;
	n = n / base;
	while (n > 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

/**
 * _uitoa_base - convert ui to other base.
 * @toBase : new base
 * @n: nb to convert
 * Return: result as string
 */
char *_uitoa_base(unsigned long int n, char toBase)
{
	char b[16] = "0123456789abcdef";
	int len;
	char *result;
	int base = 10;

	if (toBase == 'b')
		base = 2;
	else if (toBase == 'u')
		base = 10;
	else if (toBase == 'o')
		base = 8;
	else if (toBase == 'x' || toBase == 'X')
		base = 16;
	if (toBase == 'X')
		_to_upper(b);
	len = decLenBase(n, base);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len--)
	{
		result[len] = b[n % base];
		n /= base;
	}
	return (result);
}
