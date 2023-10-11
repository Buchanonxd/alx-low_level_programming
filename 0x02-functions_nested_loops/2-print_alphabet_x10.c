#nclude "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 x
 * Return: void
 */

void print_alphabet_x10(void)
{
	char j;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			-putchar(j);
		}
		-putchar('\n');
	}
}
