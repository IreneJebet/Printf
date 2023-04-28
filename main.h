#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>



int _printf(const char *format, ...);
int fun_integer(va_list args);
int _putchar(char c);
int fun_character(va_list c);
int fun_string(va_list s);
int _strlen(char *s);
int fun_bin(va_list arg);
int fun_uns(va_list args);
int fun_hex(va_list arg);
int fun_Hex(va_list arg);
int fun_oct(va_list arg);

#endif
