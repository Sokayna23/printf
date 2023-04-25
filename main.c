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
	int _len;
	int len;
	int *p;

	p = &_len;
	_len = _printf("%p\n", p);
	len = printf("%p\n", p);

	printf("len = %d, _len = %d\n", len, _len);
	return (0);
}
