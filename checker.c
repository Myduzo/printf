#include "holberton.h"
/**
 * check_special - check for special character
 * @c : the str to check
 */
void check_special(char c, char s)
{
    //int j;
    //char special[2] = "n";
    //for (j = 0; special[j] != '\0'; j++)
    {
        if (c == '\\' && s == 'n')
        _putchar('\n');
    
    }
}