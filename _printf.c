#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
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
        {"%", p_percent}
    };

    va_list argument;
    int count = 0;
    int len, i, j;

    for (len = 0; format[len]; len++);

    va_start(argument, format);

    if (!format || argument == NULL)
    return (-1);

    //format [0, ...]
    for (i = 0; i < len; i++)
    {
        //new[0, ...].character
        for (j = 0; j < 2; j++)
        {
            if (format[i] == '%' && format[i + 1] == '\0')
            return (-1);
            //if the character from format match character from the array
            if (format[i] == '%' && format[i + 1] == *new[j].character)
            {
                new[j].function(argument);
                if (i < (len))
                _putchar(',');
                _putchar(' ');    
                count++;
            }
        }
    }
    _putchar('\n');
    va_end(argument);
    return (count);
}



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

void p_percent(va_list a)
{
    char c;
    c = va_arg(a, int);
    _putchar(c);
}