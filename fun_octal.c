#include "main.h"

/**
* fun_oct - print numbers in base_8
* @arg: is a table of contact
* Return: int
*/

int fun_oct(va_list arg)
{
unsigned int x;
int i, c = 0;
int ar[100];
x = va_arg(arg, int);

if (x == 0)
{
_putchar(0);
return (1);
}

while (x > 0)
{
ar[c] = x % 8;
x /= 8;
c++;
}
for (i = c - 1; i >= 0; i--)
_putchar(ar[i] + 0);
return (c);
}

