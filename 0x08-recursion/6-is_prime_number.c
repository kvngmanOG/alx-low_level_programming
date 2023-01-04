#include "main.h"
/**
 * helperFunction - returns 0 or 1
 * @num: number
 * @i: factor
 * Return: 0 if not prime 1 if prime
 */
int helperFunction(int num, int i)
{
if (i < num)
{
if (num % i == 0)
{
return (0);
}
else
{
return (helperFunction(num, i + 1));
}
}
else
{
return (1);
}
}
/**
 * is_prime_number - checks ffor prime num
 * @n: number
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else
{
return (helperFunction(n, 2));
}
}
