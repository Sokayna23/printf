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

    len = printf("%41p\n", &len); 
	_len = _printf("%41p\n", &len);
	printf(" len : %d\n_len : %d\n", len, _len);
	return (0);
}
