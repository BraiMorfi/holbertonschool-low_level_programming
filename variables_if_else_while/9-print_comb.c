#include <stdio.h>
/*
 * main - entry point
 * return: always 0
 */
int main(void)
{
	int mum;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
