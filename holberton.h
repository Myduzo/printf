#ifndef _HOlBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

int _printf(const char *format, ...);
void p_char(va_list a);
void p_string(va_list a);

typedef struct class
{
    char *character;
    void (*function)();
} class;

#endif