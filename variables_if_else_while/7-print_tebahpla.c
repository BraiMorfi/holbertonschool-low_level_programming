#include <stdio.h>
/*
 * main - prints the lowercase in reverse
 * Return: always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar('\n');
	putchar('\n');
	return (0);
}
