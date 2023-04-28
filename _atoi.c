#include "main.h"
/**
 * _atoi- atoi
 * @str: string
 * Return: number
 */
int _atoi(const char *str)
{
	unsigned int nb;

	nb = 0;
	while (str && *str == '0')
		str++;
	while (str && *str >= '0' && *str <= '9')
		nb = (nb * 10) + ((int)(*str++) - '0');
	return (nb);
}
