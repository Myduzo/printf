#include <unistd.h>
/**
 * _putchar - write the c charcter
 * @c: the character to print
 * Return: Always 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
