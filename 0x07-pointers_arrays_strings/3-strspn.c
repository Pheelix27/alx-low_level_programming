#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment
 * @accept: which consist only of bytes
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int w = 0, u, v;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] != 32)
		{
			for (v = 0; accept[v] != '\0'; v++)
			{
				if (s[u] == accept[v])
					w++;
			}
		}
		else
			return (w);
	}
		return (w);

}
