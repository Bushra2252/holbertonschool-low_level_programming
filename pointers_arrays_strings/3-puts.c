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
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);
}
