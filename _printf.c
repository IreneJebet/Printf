#include "main.h"
/**
* _printf - printf function
* @format: arguments
* Return: number of characters printed
*/

int _printf(const char *format, ...)
{
va_list arguments;
const char *p;
int num = 0;
va_start(arguments, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
for (p = format; *p; p++)
{
if (*p == '%' &&  *p + 1 == '%')
{
_putchar(*p), num++;
continue;
}
else if (*p == '%'  &&  *p + 1 != '%')
{
switch (*++p)
{
case 's':
num += fun_string(arguments);
break;
case 'c':
num += fun_character(arguments);
break;
case '%':
_putchar('%'), num++;
break;
case 'i': case 'd':
num += fun_integer(arguments);
break;
case 'b':
num += fun_bin(arguments);
break;
case 'u':
num += fun_uns(arguments);
break;
case 'x':
num += fun_hex(arguments);
break;
case 'X':
num += fun_Hex(arguments);
break;
case 'o':
num += fun_oct(arguments);
break;
default:
_putchar('%'), _putchar(*p), num += 2;
}
}
else
_putchar(*p), num++;
}
va_end(arguments);
return (num);
}
