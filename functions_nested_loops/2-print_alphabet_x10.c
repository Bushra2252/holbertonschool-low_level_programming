#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times in lowercase
*
* Return: void
*/
void print_alphabet_x10(void)
{
int num;
char ch;

for (num = 1; num <= 10; num++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
