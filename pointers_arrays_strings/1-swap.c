#include "main.h"
/**
*swa_int - swaps value of tow integers
*@a: pointer first
*@b: pointer second
*
*Return: void
*/
void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
