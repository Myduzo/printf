#include "holberton.h"
/**
 * p_char - print a character
 * @a: the character to print
 * Return: Always 0
 */
int p_char(va_list a)
{
char c;
c = va_arg(a, int);
_putchar(c);
return (1);
}

/**
 * p_string - print a string
 * @a: the string to print
 * Return: Always 0
 */
int p_string(va_list a)
{
int i;
char *s;
s = va_arg(a, char *);
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
return (i);
}

/**
 * p_decimal - print a string
 * @a: the decimal to print
 * Return: Always 0
 */
int p_decimal(va_list a)
{
int i, z, r, n;
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
return(i);
}

while (d >= 10)
{
r = d / n;
_putchar (r + '0');
d -= r * n;
n /= 10;
}
_putchar(d + '0');
return (i);
}

/**
 * p_binary - print a binary
 * @a: the binary to print
 * Return: Always 0
 */
int p_binary(va_list a)
{   
int x = va_arg(a, int);
int r, i, j, k, len;
int aux;
int c[100];

for (i = 0; x / 2 != 0; i++)
{
r = x % 2;
c[i] = r;
x /= 2;
}
c[i] = x % 2;

len = i;
for (j = 0; j < i; i--, j++)
{
aux = c[j];
c[j] = c[i];
c[i] = aux;
}

for (k = 0; k <= len; k++)
{
_putchar(c[k] + '0');
}

return (i);
}
