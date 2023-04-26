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

	len = printf("%4x\n", 0);
	_len = _printf("%4x\n", 0);
	printf(" len : %d\n_len : %d\n", len, _len);
	return (0);
}