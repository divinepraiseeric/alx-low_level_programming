#include <stdio.h>
/**
* main - Prints a-z in reverse
* Return: Always (...)
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
