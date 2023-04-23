#include "main.h"
/**
 * _strlen- len(s)
 * @s: string
 * Return: len of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
