#include "main.h"

/**
 * *_stract - concatenates the string pointed @src
 * the end of string pointed
 * @dest: string that will be appended
 * @src: string to be concatenated
 *
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
