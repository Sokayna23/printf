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

	_len = _printf("%+  +++d\n", 55);
	len = printf("%+++ ++ d\n", 55);

	printf("len = %d, _len = %d\n", len, _len);
	return (0);
}
