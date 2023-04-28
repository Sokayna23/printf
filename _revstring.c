#include "main.h"
/**
 * _putrevstring- _putrevstring
 * @s: string
 * Return: len of s
 */
int _putrevstring(char *s)
{
	int len;
	char *revstr;

	if (!s)
		return (_putrevstring("(null)"));
	len = _strlen(s);
	revstr = malloc(len + 1);
	if (!revstr)
		exit(98);
	while (--len >= 0)
		revstr[len] = *s++;
	len = _puts(revstr, NULL);
	free(revstr);
	return (len);
}
