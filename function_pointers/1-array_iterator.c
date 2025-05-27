#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter
 * @array: The array
 * @size: size of the array
 * @action: A pointer
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}

