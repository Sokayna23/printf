#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putnbr(int n);
char *_uitoa_base(unsigned int n, char base);
int _isinstr(char *str, char toFind);
void _to_upper(char *s);
int _isprintable(char c);
int _putsNonPrintable(char *str);
int _puts_address(void *ptr);
#endif
