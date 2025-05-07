#include "main.h"
/**
*swap int - swap value of tow int
*@a - pointer first
*@b - pointer second
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
