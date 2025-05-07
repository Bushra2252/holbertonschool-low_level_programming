#include "main.h"
/**
*swap_int - swaps 
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
