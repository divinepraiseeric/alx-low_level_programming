#include <stdio.h>
/**
* main - Print 0 to 9 with newline
* Return: Always (...)
*/
int main(void)
{  
int n; 
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
