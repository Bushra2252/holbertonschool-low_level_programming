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
int result = 0;
int sign = 1;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (sign == 1)
{
if (result > (2147483647 - (s[i] - '0')) / 10)
return (2147483647);
}
else
{
if (result > (2147483648U - (s[i] - '0')) / 10)
return (-2147483648);
}
result = result * 10 + (s[i] - '0');
i++;
}

return (sign * result);
}

