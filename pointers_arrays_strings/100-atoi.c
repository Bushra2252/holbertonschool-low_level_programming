#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: the string to convert
*
* Return: the integer value
*/
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int result = 0;
int started = 0;

while (s[i] != '\0')
{
if (s[i] == '-' && !started)
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
started = 1;
}
else if (started)
{
break;
}
i++;
}

if (!started)
{
return (0);
}

if (sign == -1)
{
return (-((int)result));
}
return ((int)result);
}

