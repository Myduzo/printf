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
        {"s", p_string}};

    va_list argument;
    int count = 0;
    int len, i, j;
    char *seperation;

    seperation = ", ";
    for (len = 0; format[len]; len++)
        ;

    va_start(argument, format);
    //format [0, ...]
    for (i = 0; i < len; i++)
    {
        //new[0, ...].character
        for (j = 0; j < 2; j++)
        {
            //if the character from format match character from the array
            if (format[i] == *new[j].character)
            {
                new[j].function(argument);
                if (i < (len - 1))
                    printf("%s", seperation);
                count++;
            }
        }
    }
    printf("\n");
    va_end(argument);
    //printf("%d", count);
    return (count);
}

void p_char(va_list a)
{
    printf("%c", va_arg(a, int));
    //write(1, va_arg(a, int), 1);
}
void p_string(va_list a)
{
    printf("%s", va_arg(a, char *));
}
