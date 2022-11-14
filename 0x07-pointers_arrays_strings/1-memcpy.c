#include "main.h"
/**
*memcpy copies n bytes from one memo add to another
* src --- to copy from while dest --- to copy to
* unsigned int n is the iterating range of memory area to be copied from
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
	{
		*(dest + n) = *(src + n);
	}
return (dest);
}

