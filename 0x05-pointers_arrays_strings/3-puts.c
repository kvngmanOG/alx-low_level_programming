#include "main.h"

/**
 * _puts - function prints string to stdout
 *
 * @str: input string
 *
 */

void _puts(char *str)
{
int index;

for (index = 0; str[index] != '\0' ; index++)

{
	putchar(str[index]);
}
_putchar('\n');

}
