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
	flags->lenMod = '\0';
}
/**
 * getFlags - getFlags
 * @format: format
 * @flags: flags
 */
void getFlags(const char **format, t_flag *flags)
{
	while (**format && _isinstr("+ #", **format))
	{
		if (**format == '+')
			flags->plus = 1;
		else if (**format == ' ')
			flags->spc = 1;
		else if (**format == '#')
			flags->sharp = 1;
		else if (_isinstr("lh", **format) && _isinstr("diuoxX", **(format + 1)))
			flags->lenMod = **format;
		(*format)++;
	}
}
