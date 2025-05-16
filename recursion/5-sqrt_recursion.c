#include "main.h"

/**
* _sqrt_helper - helps to find square root recursively
* @n: the number to find square root of
* @i: the current guess
*
* Return: the square root or -1 if not found
*/
int _sqrt_helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (_sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number
*
* Return: the natural square root, or -1 if not natural root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt_helper(n, 0));
}
