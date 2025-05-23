#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_digit_string - checks if a string contains only digits
* @s: the string to check
*
* Return: 1 if only digits, 0 otherwise
*/
int is_digit_string(char *s)
{
int i = 0;

while (s[i])
{
if (!isdigit(s[i]))
return (0);
i++;
}
return (1);
}

/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
*
* Return: 0 if successful, 1 if error
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if (!is_digit_string(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
