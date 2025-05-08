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
int result = 0;
int digit;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
break;
i++;
}

if (s[i] == '\0')
return (0);

while (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';

if (sign == 1 && (result > (2147483647 - digit) / 10))
return (2147483647);
if (sign == -1 && (result > (2147483648U - digit) / 10))
return (-2147483648);

result = result * 10 + digit;
i++;
}

return (sign * result);
}

