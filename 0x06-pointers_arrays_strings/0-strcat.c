#include "main.h"

/**
 *_stract - concatenates the string pointed @src
 * _stract: concatenates the string
 * @dest: string that will be appended
 * @src: string to be concatenated
 * Return: returns pointer
 */

char *_strcat(char *dest, char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;

for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];

return (dest);
