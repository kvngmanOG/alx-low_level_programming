#include "main.h"
#include <unistd.h>
/**
 * _putchar - print the char
 * @c: character
 * Return: 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
