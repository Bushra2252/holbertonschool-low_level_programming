#include "main.h"
#include <stdlib>

/**
*array_range - create
*@min: the 
*@max: the
*
*Return: pointer
*/
int *array_range(int min, int max)
{
int *array;
int i, n;

if (min > max)
return (NULL);

n = max - min + 1;

array = malloc(n * sizeof(int));
if (array == NULL)
return (NULL);

for (i = 0; i < n ; i++)
array[i] = min + i;

return (array);
}
