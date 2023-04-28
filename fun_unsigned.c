#include "main.h"

/**
* fun_uns - print unsigned numbers
* @arg: is a table of contact
* Return: int
*/

int fun_uns(va_list args)
{
unsigned int a = va_arg(args, int); 
int b, c = a % 10, d, e = 1;
int i = 1;
a = a / 10;
b = a;

if (b > 0)
{
while (b / 10 != 0)
{
e *=  10;
b /= 10;
}

b = a;
while (e > 0)
{
d = b / e;
_putchar(d + 0);
b -= (d * e);
e /= 10;
i++;
}
}
_putchar(c + 0);
return (i);
}
