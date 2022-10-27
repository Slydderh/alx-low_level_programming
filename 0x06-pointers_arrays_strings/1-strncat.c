#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int u, v;

	u = 0;
	v = 0;
	while (dest[u] != '\0')
		u++;

	while (src[v] != '\0' && v < n)
	{
		dest[u] = src[v];
		u++;
		v++;
	}

	dest[u] = '\0';

	return (dest);
}

