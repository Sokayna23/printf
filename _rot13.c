#include "main.h"
/**
 * _rot13- rot13
 * @s: toRotate
 * Return: len printed
 */

int _rot13(char *s)
{
	int len, i = 0;
	char *newStr;

	if (!s)
		return (_rot13("(null)"));
	newStr = malloc(strlen(s) + 1);
	if (!newStr)
		exit(-98);
	newStr[strlen(s)] = '\0';
	if (!newStr)
		exit(-98);
	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
			newStr[i] = s[i] + 13;
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			newStr[i] = s[i] - 13;
		else
			newStr[i] = s[i];
		i++;
	}
	len = _puts(newStr, NULL);
	free(newStr);
	return (len);
}
