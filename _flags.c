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
 * @frm: format
 * @flags: flags
 */
void getFlags(const char **frm, t_flag *flags)
{
	while (**frm && _isinstr("+ #", **frm))
	{
		if (**frm == '+')
			flags->plus = 1;
		else if (**frm == ' ')
			flags->spc = 1;
		else if (**frm == '#')
			flags->sharp = 1;
		(*frm)++;
	}
	if (**frm && _isinstr("lh", **frm) && _isinstr("diuoxX", *(*frm + 1)))
	{
		flags->lenMod = **frm;
		(*frm)++;
	}
}
