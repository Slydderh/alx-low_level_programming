#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u;

	u = 0;
	while (u < n && src[u] != '\0')
	{
		dest[u] = src[u];
		u++;
	}
	while (u < n)
	{
		dest[u] = '\0';
	}
	u++;

	return (dest);
}

