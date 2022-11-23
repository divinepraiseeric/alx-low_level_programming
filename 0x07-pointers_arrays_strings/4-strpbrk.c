#include "main.h"
/**
 * _strpbrk - function to spot first occurence of any accept memeber in s
 * @s: a pointer to check for spots
 * @accept: a pointer with members to be spotted in s
 * Return: a pointer value is returned for spots and NULL for none
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int ptr_rt = 0;

	for (y = 0; s[y]; y++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == s[y])
			{
				ptr_rt = 1;
				return (accept);
			}
			else
				return (0);
		}
	}
	if (ptr_rt == 1)
		return (accept);
	else
		return (0);
}

