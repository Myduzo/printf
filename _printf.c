#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - recreat the function printf
 * @format: format of the entry
 * Return: Always 0
 */
int _printf(const char *format, ...)
{
va_list arg;
int count = 0;
int i;

va_start(arg, format);

i = 0;
while (format[i] != '\0')
{
if (format[i] == '%')
{
sub_print(format[i + 1], arg);
i += 2;
}
_putchar(format[i]);
i++;
}
va_end(arg);
return (count);
}
