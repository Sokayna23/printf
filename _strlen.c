#include "main.h"
/**
 * _strlen- len(s)
 * @s: string
 * Return: len of s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
