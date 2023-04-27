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
	int _len, len;
	long l = INT_MAX;

	l += 1024;
	_len = _printf("iddi%diddiiddi\n", 1024);
	len = printf("iddi%diddiiddi\n", 1024);
	printf("\n_len = %d\n len = %d\n", _len, len);
	return (0);
}
