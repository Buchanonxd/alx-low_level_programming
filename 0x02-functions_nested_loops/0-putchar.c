#include "main.h"

/**
 * main - A program that prints putchar
 * Return: 0
 */

int main(void)
{
	char c[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
