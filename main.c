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

	_len = _printf("%d ",55);
	printf("_len = %d\n", _len);
		
	/*len = printf("lllkki %d % 4488", 55);
	fflush(stdout);
	if (_len != len)
	{
		printf("_lengths differ\n_len = %d\nlen =%d.\n", _len, len);
		fflush(stdout);
		return (1);
	}
	_len = _printf("% % % % ");
	len = printf("% % % % ");
	fflush(stdout);
	if (_len != len)
	{
		printf("Lengths differ2.\n");
		fflush(stdout);
		return (1);
	}*/
	return (0);
}