#include "main.h"

/**
 * _strncpy - cfunction copies string
 * @dest: buffer
 * @src: source
 * @n: max number
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
