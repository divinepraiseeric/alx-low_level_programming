#include "main.h"
/* #include <stdio.h>
* this function fills a memory block with a constat byte of char type
* s is a pointer referencing the memory to be filled with b
* b is a char and will be the constant byte that fills memory
* n not sure why I need n yet
*/


/*
* int main()
* {
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for(i=0; i<n; i++)
{
*s = b;
/*
* printf("%x and %d", &s, *s);
*/
s = s + i;
char *s = s;         
}
_putchar (s);
}

/*
* char f = 1;
* char *s;
* s = &f;
* _memset(s, 0, 20*sizeof(char));
* return (0);
* }
*/
