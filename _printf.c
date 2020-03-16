#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - recreat the function printf
 * @format: format of the entry
 * Return: Always 0 
 */
int _printf(const char *format, ...)
{
    class new[] = {
        {"c", p_char},
        {"i", p_int},
        {"f", p_float},
        {"s", p_string}
    };

    va_list a;
    int len, i, j ,len;

    for (len = 0; format[len]; len++);

    va_start(a, foramt);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < 2; j+=2)
        {
            if (format[i] == *new[0].character)
            {
                new[0].function(a);
            }
        }
    }
    printf("\n");
    va_end(a);
    return ();
}




void print_char(va_list argument)
{
    return (write(1, va_arg(argument, int), 1));
}
void print_string(va_list argument)
{
    return (write(1, va_arg(argument, char *), 1));
}