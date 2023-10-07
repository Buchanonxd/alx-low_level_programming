#include <stdio.h>
/**
 * main - Print any alphabet apart from q and e
 * Return: 0
 */
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
