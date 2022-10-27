#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int u, v;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (u = 0; s[u] != '\0'; u++)
	{
		for (v = 0; a[v] != '\0'; v++)
		{
			if (s[u] == a[v])
			{
				s[u] = b[v];
				break;
			}
		}
	}

	return (s);
}

