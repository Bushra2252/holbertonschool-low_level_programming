#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to the string to reverse
*
* Return: void
*/
void rev_string(char *s)
{
int i = 0, j = 0;
char temp;

while (s[j] != '\0')
{
j++;
}
j--;

while (i < j)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
i++;
j--;
}
}
