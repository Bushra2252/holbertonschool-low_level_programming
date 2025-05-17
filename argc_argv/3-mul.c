#include <stdio.h>
/**
*main - a
*@argc:a
*@argv:a
*
*Return:a
*/
int main(int argc, char *argv[])
{
int n1, n2, result;

if (argc != 3)
{
printf("Error\n");
return (1);
}

n1 = atoi(argv[1]);
n2 = atoi(argc[2]);
result = n1 * n2;

printf("%d\n", result);
return (0);
}
