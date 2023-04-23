#include "main.h"
/**
 * _isprintable- _isprintable(s)
 * @c: char to check
 * Return: Is printable
 */
int _isprintable(char c)
{
	return (!((c > 0 && c < 32) || c >= 127));
}
