#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

int _printf(const char *format, ...);
void sub_print(char c, va_list a, int *i);
int _putchar(char c);

int p_char(va_list a);
int p_string(va_list a);
int p_decimal(va_list a);
int p_integer(va_list a);
int p_binary(va_list a);
int p_unsigned_decimal(va_list a);
//int p_octal(va_list a);
int p_hexadecimal(va_list a);



/**
 * struct class - a new class
 * @character: the character specifier
 * @function: the function required
 */
typedef struct class
{
char *ch;
int (*func)();
} class;

#endif
