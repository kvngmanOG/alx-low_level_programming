#include "main.h"

/**
 * puts2 - prints other characters
 * @str: pointer
 * Return: void
 */

void puts2(char *str)
{
int i;

i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
putchar(str[i]);
}
i++;
}
putchar('\n');

}
