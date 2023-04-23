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

	_len = _printf("%S\n", "Best\nSchool");
	printf("\n_len = %d\n", _len);
	return (0);
}
