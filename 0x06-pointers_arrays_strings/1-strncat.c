#include "main.h"
/**
 * _strncat - concatenate two strings but add numbers
 * @dest: string to be appeneded
 * @src: string to be completed at the end of dest
 * @n: integer
 * Return: returns new string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
int i;
int j;

i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
