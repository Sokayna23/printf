#include "main.h"

/**
 * resetFlags - Reset flags
 * @flags: flags
 */
void resetFlags(t_flag *flags)
{
	flags->plus = false;
	flags->sharp = false;
	flags->spc = false;
}
/**
 * getFlags - getFlags
 * @format: format
 * @flags: flags
 */
void getFlags(const char **format, t_flag *flags)
{
	resetFlags(flags);
	while (**format && _isinstr("+ #", **format))
	{
		if (**format == '+')
			flags->plus = 1;
		else if (**format == ' ')
			flags->spc = 1;
		else if (**format == '#')
			flags->sharp = 1;
		(*format)++;
	}
}
