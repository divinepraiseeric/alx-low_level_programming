#include <stdio.h>
/**
* main - prints all alphabets except q and e
*
* Return: Always (...)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
