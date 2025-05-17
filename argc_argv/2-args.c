#include <stdio.h>
/**
*main - a
*@argc:a
*@argv:a
*
*Return: always
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
