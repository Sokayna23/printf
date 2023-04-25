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
	int a;
	int _len;
	int len;
	a = 5;
	_len = _printf("%p\n", &a);
	len = printf("%p\n", &a);

	printf("len = %d, _len = %d", len, _len);
	return (0);
}
