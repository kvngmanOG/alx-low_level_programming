#include "main.h"

/**
 *  _strchr - locates
 *  @s: string
 *  @c: character
 *  Return: pointer
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}

return (0);
}
