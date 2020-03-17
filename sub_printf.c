#include "holberton.h"
#include <stdarg.h>
/**
 * 
 * 
 * 
 */
void sub_print(char c, va_list a)
{
    class new[] = {
    {"c", p_char},
    {"s", p_string},
    {"d", p_decimal},
    {"i", p_integer}
    };
    int i;

    for (i = 0; i < 5; i++)
    {
        if (c == *new[i].character)
        {
            new[i].function(a);
        }
        if (c == '%')
        _putchar('%');

        
    }
 
}