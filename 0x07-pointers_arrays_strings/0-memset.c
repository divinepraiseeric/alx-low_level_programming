#include "main.h"
#include <stdio.h>
/*
* this function fills a memory block with a constat byte of char type
* s is a pointer referencing the memory to be filled with b
* b is a char and will be the constant byte that fills memory
* n not sure why I need n yet
*/

char *_memset(char *s, char b, unsigned int n)
{
for(i==0; i<n; i++)
{
*(s + i) = b;
// printf("%x and %c" (s + i), *(s + i));
}
return (s);
}
