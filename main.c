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

    len = printf("%s\n", "test tetez"); 
	_len = _printf("%s\n", "test tetez");
	printf(" len : %d\n_len : %d\n", len, _len);
	return (0);
}
