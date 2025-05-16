#include "main.h"

/**
* _pow_recursion - returns the value of x raised to the power of y.
* @x: the base number.
* @y: the exponent.
*
* Return: x raised to power y, or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1); /* خطأ: لا نقبل أس سالب */
if (y == 0)
return (1); /* أي عدد للقوة صفر = 1 */
return (x * _pow_recursion(x, y - 1)); /* x^y = x * x^(y-1) */
}
