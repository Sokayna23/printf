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
 * @base : new base
 * @n: nb to convert
 * Return: result as string
 */
char *_uitoa_base(unsigned long int n, int base)
{
	char b[16] = "0123456789abcdef";
	int len;
	char *result;

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
