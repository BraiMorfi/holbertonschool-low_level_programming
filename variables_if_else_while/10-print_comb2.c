#include <stdio.h>
/*
 * main - print the numebers from 00 to 99
 * number separeted by comma and space
 * Return: always 0
 */
int main(void)
{
	int digit1, digit2;
	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			puchar((digit2 % 10) +'0');
			if (digit1 ==9 && digit2 == 0)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
