#include "main.h"
/**
 * get_bit - gets bit value
 * @n: bit
 * @index: the index
 * Return: -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);
if ((n & (1 << index)) == 0)
return (0);

return (1);
}
