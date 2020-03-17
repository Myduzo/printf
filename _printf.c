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
class new[] = {
{"c", p_char}, {"s", p_string}, {"d", p_decimal}, {"i", p_integer}
};

va_list argument;
int count = 0;
int len, i, j, x;

for (len = 0; format[len] != '\0'; len++)
;
va_start(argument, format);
if (!format || argument == NULL)
return (-1);

for (i = 0; i < len; i++)
{
for (j = 0; j < 2; j++)
{
if (format[i] == '%' && format[i + 1] == '\0')
return (-1);
if (format[i] == '%' && format[i + 1] == '%')
{
_putchar('%');
i++;
}
if (format[i] == '%' && format[i + 1] == *new[j].character)
{
new[j].function(argument);
if (i < len)
{
_putchar(',');
_putchar(' ');
}
count++;
}
}
}
va_end(argument);
return (count);
}
