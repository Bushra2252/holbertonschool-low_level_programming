#include "main.h"
#include <unistd.h>
/**
*_puts - print
*@str: po
*
*Return: void
*/
void _puts(char *str)
{
int i = 0;
while (*str != '\0')
{
putchar (*str);
str++;
}
write(1, "\n", 1);
}
