#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - recreat the function printf
 * @format: format of the entry
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
char *types = "csdi";

va_list arg;
int count = 0;
int len, i, j;

for (len = 0; format[len] != '\0'; len++)
;
va_start(arg, format);
if (!format || arg == NULL)
return (-1);

while (!format)
{
if (*format == '%')
sub_printf(*format++, arg)

if (*format++)
{
_putchar(*format);
}
}
va_end(arg);
return (count);
}
