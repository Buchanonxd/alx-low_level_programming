#include "main.h"
/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string to be searched
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

		if (*s == c)
			return (s);
		return (NULL);
}
