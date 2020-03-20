#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sub_print - next step
 * @c : the character to print
 * @a : the argument to pass
 * @count2 : counter
 */
void sub_print(char c, va_list a, int *count2)
{
class new[] = {
{"c", p_char},
{"s", p_string},
{"d", p_decimal},
{"i", p_integer},
{NULL, NULL},
};
int i;

for (i = 0; new[i].ch != NULL; i++)
{
if (c == *new[i].ch)
{
*count2 = new[i].func(a);
}
if (c == '%')
_putchar('%');
}
}
