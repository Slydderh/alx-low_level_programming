#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len, t;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (t = 0; t < len; t++)
	{
		dest[t] = src[t];
	}

	dest[t] = '\0';

	return (dest);
}

