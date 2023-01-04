#include "main.h"

/**
 * helperFunction - checks sqrt
 * @num: number
 * @pSqrt: possible sqrt
 * Return: sqrt of number or -1 for error
 */
int helperFunction(int num, int pSqrt)
{
if ((pSqrt * pSqrt) == num)
{
return (pSqrt);
}
else
{
if ((pSqrt * pSqrt) > num)
return (-1);
else
return (helperFunction(num, pSqrt + 1));
}
}

/**
 * _sqrt_recursion - return the natural sqrt
 * @n: number
 * Return: squareroot
 * -1 if n does not a natural sqrt
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (helperFunction(n, 0))
}
