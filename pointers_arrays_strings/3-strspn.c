#include "main.h"

/**
*_strspn - gets the length
*@s: the string
*@accept: the string
*
*Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
int match;

for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; i++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (!match)
break;
}
return (i);
