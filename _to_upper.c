#include "main.h"
/**
 * _to_upper- upper case s
 * @s: string
 */
void _to_upper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s += 'A' - 'a';
		s++;
	}
}
