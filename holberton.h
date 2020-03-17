#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void p_char(va_list a);
void p_string(va_list a);
void p_percent(va_list a);

/**
 * struct class - a new class
 * @character: the character specifier
 * @function: the function required
 */
typedef struct class
{
char *character;
void (*function)();
} class;

#endif
