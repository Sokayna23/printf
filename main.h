#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * struct s_flag- flag structure.
 * @sharp: sharp flag
 * @spc: spc flag
 * @plus: plus flag
 */
typedef struct s_flag
{
	bool sharp;
	bool spc;
	bool plus;
} t_flag;

int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putnbr(int n, t_flag flags);
char *_uitoa_base(unsigned long int n, int base);
int _isinstr(char *str, char toFind);
void _to_upper(char *s);
int _isprintable(char c);
int _putNonPrintable(char *str);
int _putAddress(unsigned long int address, t_flag *flags);
void getFlags(const char **format, t_flag *flags);
int _putbase(unsigned long int n, char base, t_flag flags);
#endif
