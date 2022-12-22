#include "main.h"

/**
 * _strcat - concatenates the string pointed @src
 * Description: concatenates strings
 * @dest: string that will be appended
 * @src: string to be concatenated
 * Return: returns pointer
 */

char *_strcat(char *dest, char *src)
{
int len = 0, i;

while (dest[len])
len++;

for (i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
len += 1;
}
dest[len] = '\0';
return (dest);
}
