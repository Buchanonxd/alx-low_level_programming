#include <stdio.h>
/**
 * main - print base 10 using ASCII
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		putchar (n);
	putchar('\n');
	return (0);
}
