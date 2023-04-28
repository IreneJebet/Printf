#include "main.h"

/**
* fun_Hex - print numbers in the base_16 in uper_case
* @arg: is a table of contact
* Return: int
*/

int fun_Hex(va_list arg)
{
unsigned int x;
int c, z, b;
int ar[100];
x = va_arg(arg, int);
c = 0;
z = 0;
if (x == 0)
{
_putchar(0);
return (1);
}

while (x != 0)
{
b = x % 16;
if(b < 10)
ar[c] = 48 + b;
else
ar[c] = 55 + b;
x /= 16;
c ++;
}
for (z = c - 1; z >= 0; z--)
_putchar(ar[z]);
return (c);
}

/**
* fun_hex - print numbers in the base_16 in lower_case
* @arg: is a table of contact
* Return: int
*/

int fun_hex(va_list arg)
{
unsigned int x;
int c, z, b;
int ar[100];
x = va_arg(arg, int);
c = 0;
z = 0;
if (x == 0)
{
_putchar(0);
return (1);
}

while (x != 0)
{
b = x % 16;
if(b < 10)
ar[c] = 48 + b;
else
ar[c] = 87 + b;
x /= 16;
c ++;
}
for (z = c - 1; z >= 0; z--)
_putchar(ar[z]);
return (c);
}

