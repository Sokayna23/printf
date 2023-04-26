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

	len = printf("%010.5d\n", 100);
	_len = _printf("%ld\n", LONG_MAX);
	printf(" len : %d\n_len : %d\n", len, _len);
	return (0);
}