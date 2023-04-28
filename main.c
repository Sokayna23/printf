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

    len = printf("pt |%0-.16x|\n", 102498402);
	_len = _printf("_pt|%0-.16x|\n", 102498402);
	printf(" len : %d\n_len : %d\n", len, _len);
	return (0);
}
