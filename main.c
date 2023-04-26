#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int _len;

	len = printf("%ld\n", LONG_MAX);
	_len = _printf("%ld\n", LONG_MAX);
	printf(" len : %d\n_len : %d\n", len, _len);
	return (0);
}