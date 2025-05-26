#include <stdio.h>
#include "function_pointer.h"

/**
* print_name - print a name using a function
*@name: name of the person
*@f:pointer
*
*Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
