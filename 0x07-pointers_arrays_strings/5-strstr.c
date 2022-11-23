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
			if (needle[0] == haystack[y])
			{
				start = y;
				status = 1;
				while (needle[++x])
				{
					if (needle[x] != haystack[start + x])
					{
						y = start;
						status = 0;
					}
				}
			}
		}
	}
	if (status == 1)
	{
		haystack[start] = *needle;
		return (haystack);
	}
	else if (needle[0] == 0)
		return (haystack);
	else
		return (0);
}

