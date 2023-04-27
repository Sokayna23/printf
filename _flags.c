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
	flags->precision = 0;
}
/**
 * getFlags - getFlags
 * @frm: format
 * @flags: flags
 */
void getFlags(const char **frm, t_flag *flags)
{
	while (**frm && _isinstr("+ #0", **frm))
	{
		if (**frm == '+')
			flags->plus = true;
		else if (**frm == ' ')
			flags->spc = true;
		else if (**frm == '#')
			flags->sharp = true;
		else if (**frm == '0')
			flags->zero = true;
		(*frm)++;
	}
	if (**frm && _isinstr("123456789", **frm))
	{
		flags->width = _atoi(*frm);
		while (**frm && _isinstr("123456789", **frm))
			(*frm)++;
		if (!_isinstr(".lhdiuoxX", *(*frm)))
			flags->width = 0;
	}
	if (**frm == '.' && _isinstr("123456789", **frm))
	{
		flags->precision = _atoi(*frm);
		while (**frm && _isinstr("123456789", **frm))
			(*frm)++;
	}
	if (**frm && _isinstr("lh", **frm) && _isinstr("diuoxX", *(*frm + 1)))
	{
		flags->lenMod = **frm;
		(*frm)++;
	}
}
