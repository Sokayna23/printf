#include "main.h"
/**
 * _atoi- atoi
 * @str: string
 * Return: number
 */
int _atoi(const char *str)
{
	int i;
	unsigned int nb;
	int neg;

	i = 0;
	neg = 1;
	nb = 0;
	while (str && str[i] && (str[i] == '0' || str[i] == ' '))
		i++;
	if (!_isinstr("-0123456789", str[i]))
		return (0);
	while (str && str[i] && (str[i] < '0' || str[i] > '9'))
		neg = str[i++] == '-' ? -neg : neg;
	while (str && str[i] == '0')
		i++;
	while (str && str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + ((int)str[i] - '0');
		i++;
	}
	return (nb * neg);
}
