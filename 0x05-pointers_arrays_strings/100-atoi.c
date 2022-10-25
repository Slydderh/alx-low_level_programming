#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer converted
 */

int _atoi(char *s)
{
	int t, d, n, len, f, digit;

	t = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (t < len && f == 0)
	{
		if (s[t] == '-')
			++d;

		if (s[t] >= '0' && s[t] <= '9')
		{
			digit = s[t] - '0';

			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;

			if (s[t + 1] < '0' || s[t + 1] > '9')
				break;
			f = 0;
		}
		t++;
	}

	if (f == 0)
		return (0);

	return (n);
}

