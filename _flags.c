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
	flags->width = 0;
	flags->zero = false;
	flags->prcs = 0;
	flags->isPrcs = false;
	flags->bar = false;
}
/**
 * getFlags - getFlags
 * @frm: format
 * @args: args
 * @flags: flags
 */
void getFlags(const char **frm, t_flag *flags, va_list args)
{
	const char *ptr;

	ptr = *frm;
	while (**frm && _isinstr("+ #0-", **frm))
	{
		if (**frm == '+')
			flags->plus = true;
		else if (**frm == ' ')
			flags->spc = true;
		else if (**frm == '#')
			flags->sharp = true;
		else if (**frm == '0')
			flags->zero = true;
		else if (**frm == '-')
			flags->bar = true;
		(*frm)++;
	}
	if (**frm && _isinstr("*123456789", **frm))
	{
		flags->width = *(*frm + 1) == '*' ? va_arg(args, int) : _atoi(*frm);
		while (**frm && _isinstr("*0123456789", **frm))
			(*frm)++;
		if (!_isinstr(".csSrRdiuoxXbp%", *(*frm)))
			flags->width = 0;
	}
	if (**frm && **frm == '.')
	{
		flags->isPrcs = true;
		flags->prcs = *(*frm + 1)  == '*' ? va_arg(args, int) : _atoi(*frm);
		while (**frm && _isinstr(".*0123456789", **frm))
			(*frm)++;
	}
	if (**frm && !_isinstr("lhcsSRrdiuoxXbp%", **frm))
		*frm = ptr;
	else if (**frm && _isinstr("lh", **frm))
	{
		flags->lenMod = **frm;
		*frm += (!*(*frm + 1) || _isinstr("csSrRdiuoxXbp%", *(*frm + 1))) ? 1 : 0;
	}
}
