#include "main.h"

/**
 * string_toupper - changes cases
 * @str: para
 * Return: returns a charscter
 */

char *string_toupper(char *str)
{
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}
return (str);
}
