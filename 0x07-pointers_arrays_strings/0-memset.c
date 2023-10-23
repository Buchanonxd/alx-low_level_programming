#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: address of memory to be filled
 * @b: constant byte used for filling
 * @n: number of bytes to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int  i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
	}
	return (s);
}
