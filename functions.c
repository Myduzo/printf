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
 * p_integer - print a string
 * @a: the string to print
 * Return: Always 0
 */
int p_integer(va_list a)
{
int i;
i = va_arg(a, int);
_putchar(i);
return (1);
}

/**
 * p_decimal - print a string
 * @a: the string to print
 * Return: Always 0
 */
int p_decimal(va_list a)
{
int i, d;
d = va_arg(a, int);
for (i = 0; i < d; i++)
_putchar(d);
return (i);
}

