#include "main.h"
/**
*swap int - swap value of tow int
*@a,b - the values
*
*Return: int
*/
void swap_int(int *a, int *b)
{
int c;

c = *b;
*b = *a;
*a = c;
}
