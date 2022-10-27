#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int u, v;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (u = 0; s[u] != '\0'; u++)
	{
		if (u == 0 && s[u] >= 'a' && s[u] <= 'z')
			s[u] -= 32;

		for (v = 0; v < 13; v++)
		{
			if (s[u] == spe[v])
			{
				if (s[u + 1] >= 'a' && s[u + 1] <= 'z')
				{
					s[u + 1] -= 32;
				}
			}
		}
	}

	return (s);
}

