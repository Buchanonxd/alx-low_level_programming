#include "main.h"
/**
 * _strspn  - gets length of a prefix substring
 * @s: large list to be searched
 *@accept: small list to be searched
 *Return: the number of characters of s found in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{

	for (index = 0; accept[index]; index++)
	{
		if (*s == accept[index])
		{
		bytes++;
		break;
		}
	else if (accept[index + 1] == '\0')
		return (bytes);
	}
	s++;
	}
	return (bytes);
}


