#include "main.h"
/**
* _isupper(int c) - check if c is upper case
* c - the character to check
*
*Return 1 if uppercase 0 if otherwise
*/
int _isupper(int c)
{
if ( c >= 'A' && c <= 'Z' )
return (1);
else
return (0);
}
