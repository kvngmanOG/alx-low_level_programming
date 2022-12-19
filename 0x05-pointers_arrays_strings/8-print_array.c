#include "main.h"
/**
 * print_array - print array elements
 * @a: pointer
 * @n: number of arrays
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(",");
printf(" ");
}
}
printf("\n");

}
