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

	a = 5;
	_printf("test%ptest\n", &a);
	return (0);
}
