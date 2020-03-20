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
int d, i, r, n;

d = va_arg(a, int);

if (d < 0)
{
d = d * (-1);
_putchar('-');
}

i = 0;
for (n = 1; n < d / 10; n *= 10)
i++;
while (d > 10)
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
 * p_integer - print a string
 * @a: the integer to print
 * Return: Always 0
 */
int p_integer(va_list a)
{
int i;

for (i = 0; i < 10; i++)
{
i = va_arg(a, int);
if (i >= 10)
{
_putchar(i = i / 10 + '0');
_putchar(i = i % 10 + '0');
}
if (i >= 100)
{
_putchar(i = i / 10 + '0');
_putchar(i = i % 100 + '0');
}
if (i >= 1000)
{
_putchar(i = i / 10 + '0');
_putchar(i = i % 1000 + '0');
}
}
_putchar(i + '0');
return (1);
}



