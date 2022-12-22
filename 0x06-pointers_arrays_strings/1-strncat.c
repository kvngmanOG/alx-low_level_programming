#include "main.h"
/**
 * _strncat - concatenate two strings but add numbers
 * @dest: string to be appeneded
 * @src: string to be completed at the end of dest
 * @n: integer
 * Return: returns new string
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = scr[index];

return (dest);
}
