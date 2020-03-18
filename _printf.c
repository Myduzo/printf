#include "holberton.h"
#include <stdarg.h>
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

va_start(arg, format);
if (!format || arg == NULL)
return (-1);

i = 0;
while (format[i] != '\0')
{
if (format[i] == '%')
{
sub_printf(format[i + 1], arg);
i += 2;
}
_putchar(format[i]);
i++;
}
va_end(arg);
return (count);
}
