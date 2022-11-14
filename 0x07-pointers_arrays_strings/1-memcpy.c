#include "main.h"
/**
*memcpy is meant to mimic a staple C function that copies n bytes from one memo add to another
* src is the memory source to copy from while dest is the memory destination to copy to
* unsigned int n is the iterating range of memory area to be copied from
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-->0)
	{	
		*(dest+n) = *(src+n);
	}
return dest;
}

