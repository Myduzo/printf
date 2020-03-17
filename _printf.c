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
{"c", p_char},
{"s", p_string},
{"d", p_decimal},
{"i", p_integer}
};

va_list argument;
int count = 0;
int len, i, j, x;

for (len = 0; format[len] != '\0'; len++)
;
va_start(argument, format);
if (!format || argument == NULL)
return (-1);

/*format [0, ...]*/
for (i = 0; i < len; i++)
{
    /*new[0, ...].character*/
    for (j = 0; j < 2; j++)
    {
        if (format[i] == '%' && format[i + 1] == '\0')
        return (-1);
        /* if format is just a string */
        if (!format && argument == NULL)
        {
            for (x = 0; x < len; x++)
            _putchar(format[x]);
            return (1);
        }
        /* for "%%" */ 
        if (format[i] == '%' && format[i + 1] == '%')
        {
            _putchar('%');
            i++;
        }
        /*if the character from format match character from the array*/
        if (format[i] == '%' && format[i + 1] == *new[j].character)
        { 
            count++;
            new[j].function(argument);
            if (i < len)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
    check_special(format[i], format[i + 1]);
}
va_end(argument);

return (count);
}
