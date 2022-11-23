#include "main.h"
/**
 * _strstr - a fxn that spots substring needle in parent string haystack
 * @haystack: parent string
 * @needle: substring
 * Return: Returns pointer if needle is found, NULL if not.
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int y = 0;
	unsigned int x = 0;
	unsigned int status = 0;
	unsigned int start = 0;

	for (y = 0; haystack[y]; y++)
	{
		if (status == 0)
		{
			if ((needle[0] == haystack[y]) && (status == 0))
			{
				start = y;
				status = 1;
				while (needle[++x])
				{
					if (needle[x] != haystack[start + x])
					{
						y = start + 1;
						status = 0;
						return (0);
					}
				}
			}
			else
				return (0);
		}
	}
	if (status == 1)
		return (needle);
	return (needle);
}

