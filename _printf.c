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
    va_list a;

    va_start(a, foramt);
    for (i = 0; i < strlen(format); i++)
    {
        if (format[i] == "%" && format[i + 1] == "c")
        {
            x = va_arg(a, char);
            print_char(x);
        }
        if (format[i] == "%" && format[i + 1] == "s")
        {
            x = va_arg(a, char *);
            print_string(x);
        }
    }
    va_end(a);
    return (i);
}

void print_char(char c)
{
    return (write(1, &c, 1));
}
void print_string(char *s)
{
    return (write(1, &s, 1));
}