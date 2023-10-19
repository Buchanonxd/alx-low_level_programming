#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first comparable string
 * @s2: second comparable string
 * Return: 1 if successful 0 if not
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
