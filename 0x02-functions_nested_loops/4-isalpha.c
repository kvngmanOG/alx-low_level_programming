#include  "main.h"
/**
 * _isalpha - checcks for alphabelts
 * @c: what to check
 * Return: 1 if alphabet, if not 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
