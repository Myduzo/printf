#include "holberton.h"
/**
 * p_unsigned_decimal - print an unsigned decimal
 * @a: the unsigned decimal to print
 * Return: Always 0
 */
int p_unsigned_decimal(va_list a)
{
unsigned int i, z, r, n;
long int d;

d = va_arg(a, int);
i = 1;

if (d < 0)
{
d = d * (-1);
_putchar('-');
i++;
}

for (n = 1; n <= d / 10; n *= 10)
i++;

if (n == d)
{
_putchar('1');
z = n;
while (z >= 10)
{
_putchar(48);
z /= 10;
}
return (i);
}

while (d >= 10)
{
r = d / n;
_putchar(r + '0');
d -= r * n;
n /= 10;
}
_putchar(d + '0');
return (i);
}




/**
 * p_hexadecimal - print a hexadecimal
 * @a: the hexadecimal to print
 * Return: Always 0
 */
int p_hexadecimal(va_list a)
{
int i = 0, x, r, o, count = 0;
o = va_arg(a, int);
char *s = "abcdef";
x = 16;
r = o % x;
while(o != 0)
{
r = o % x;
if (r >= 10)
{
r -= 10;
while (i != r)
{
i++;
}
_putchar(s[i]);
count++;
}
else
{
_putchar(r + '0');
count++;
}
o /= x;
}
return (count);
}