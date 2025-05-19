#include <stdlib.h>
#include "main.h"

/**
*_strdup - duplicates
*@str: the
*
*Return: pointer
*/
char *_strdup(char *str)
{
char *copy;
int i = 0, len = 0;

if (str == NULL)
return (NULL);

while (str[len] != '\0')
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

while (i < len)
{
copy[i] = str[i];
i++;
}
copy[i] = '\0';

return (copy);
}
