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
    char *types = "c, s, i, d";

    va_list argument;
    int count = 0;
    int len, i, j;

    for (len = 0; format[len] != '\0'; len++)
    ;
    va_start(argument, format);
    if (!format || argument == NULL)
    return (-1);

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (format[i] == '%' && format[i + 1] == '\0')
            return (-1);
            
            if (format[i] == '%' && format[i + 1] == types[j])
            {
                sub_print(format[i + 1], argument);
                i+=2;
            }
            
        }
        if (format[i] != '%')
        {
            _putchar(format[i]);
        }
    }
    va_end(argument);
    return (count);
}
