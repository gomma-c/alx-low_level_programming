#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry point.
 * @s: input.
 * @c: input.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
