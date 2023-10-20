#include "main.h"
/**
 * cap_string - caps the first letter of words
 *@str: string to be checked
 *Return: str
 */

char *cap_string(char *str)
{
	int i, j;

	j = 'a' - 'A';
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
