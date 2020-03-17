#include <unistd.h>
/**
 * _putchar - write the c charcter
 * @c: the character to 
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}