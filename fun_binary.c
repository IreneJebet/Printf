#include "main.h"

/**
* fun_bin - unsigned int argument is converted to binary
* @arg: is a table of contact
* Return: int
*/

int fun_bin(va_list arg)
{
unsigned int x;
int i, n;
ar[100];

x = va_arg(arg, int);

if (x == 0)
{
_putchar('0');
return (1);
}
i = 0;
while (x > 0)
{
ar[i] = x % 2;
x /= 2;
i++;
}

for (n = i - 1; n >= 0; n--)
_putchar(ar[n] + '0');
return (i);
}
