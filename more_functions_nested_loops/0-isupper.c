#include "main.h"
/**
* _isupper - Check if a character is uppercase
*@c: The character to check
*
*Return: 1 if uppercase, 0 if otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
