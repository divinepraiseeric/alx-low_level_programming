#include "main.h"
/**
 * _strpbrk - function to spot first occurence of any accept memeber in s
 * @s: a pointer to check for spots
 * @accept: a pointer with members to be spotted in s
 * Return: a pointer value is returned for spots and NULL for none
*/

char *_strpbrk(char *s, char *accept)
{
	char *ptr_ret;
	unsigned int x = 0;
	unsigned int y = 0;

	for (y = 0; s[y]; y++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == s[y])
				ptr_ret = c;
		}
	}
	if (ptr_ret == s)
		return (ptr_ret);
	else
		return (0);
}

