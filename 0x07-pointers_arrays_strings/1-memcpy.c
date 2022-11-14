#include "main.h"
/**
* _memcpy - Copies n bytes from one memo add to another
* @src: --- to copy from while
* @dest: --- to copy to
* @n: is the iterating range of memory area to be copied from
* Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n-- > 0)
	{
		*(dest + n) = *(src + n);
	}
return (dest);
}

