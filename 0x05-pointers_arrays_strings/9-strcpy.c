#include "main.h"
/**
 * _strcpy - copy variable
 * @dest: destination
 * @src: copier
 * Return: the cpoy
 */

char *_strcpy(char *dest, char *src)
{
char *start = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (start);
}
