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
	char *newptr = "olve the problem. Then, write the code.";

	for (y = 0; s[y]; y++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (accept[x] == s[y])
				return (newptr);
		}
	}
	return (0);
}

