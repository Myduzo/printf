#include "holberton.h"
/**
 * p_char - print a character
 * @a: the character to print
 * Return: Always 0
 */
void p_char(va_list a)
{
char c;
c = va_arg(a, int);
_putchar(c);
}

/**
 * p_string - print a string
 * @a: the string to print
 * Return: Always 0
 */
void p_string(va_list a)
{
int i;
char *s;
s = va_arg(a, char *);
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
}

/**
 * p_percent - print a string
 * @a: the string to print
 * Return: Always 0
 */
void p_percent(va_list a)
{
char c;
c = va_arg(a, int);
_putchar(c);
}

/**
 * p_percent - print a string
 * @a: the string to print
 * Return: Always 0
 */
void p_decimal(va_list a)
{
char c;
c = va_arg(a, int);
_putchar(c);
}

/**
 * p_percent - print a string
 * @a: the string to print
 * Return: Always 0
 */
void p_integer(va_list a)
{
char c;
c = va_arg(a, int);
_putchar(c);
}