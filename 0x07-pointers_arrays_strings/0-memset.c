#include "main.h"
/*
*_memset - fill a block of memory with a specific value
*@s: starting address of memory to be filled
*@b: the desired value
*@n: number of bytes to be changed
*Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;
while (i < n+1)
{
*(s + i) = b;
i++;
}
*&s = return s;
return s;
}
