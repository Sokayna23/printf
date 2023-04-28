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

	_len = _printf("%+*d;%+*i\n%+*d;%+*i\n%+*d;%+*i\n", 6, INT_MAX, 6, INT_MAX, 6, INT_MIN, 6, INT_MIN, 6, 0, 6, 0);
    len = printf("%+*d;%+*i\n%+*d;%+*i\n%+*d;%+*i\n", 6, INT_MAX, 6, INT_MAX, 6, INT_MIN, 6, INT_MIN, 6, 0, 6, 0);

	printf("\nlen : %d\n_len : %d\n", len, _len);
	return (0);
}
