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
	int len, len2;

	len = _printf("%d%s", 333, "Test");
	len2 = printf("\0");
	printf("\nlen = %d\n_len = %d\n", len2, len);
	return (0);
}
