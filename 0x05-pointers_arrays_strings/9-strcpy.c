#include "main.h"
/**
 * _strcpy - copy variable
 * @dest: destination
 * @src: copier
 * Return: the cpoy
 */

void *_strcpy(char *dest, char *src)
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
