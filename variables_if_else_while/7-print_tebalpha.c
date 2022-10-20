#include <stdio.h>
/*
 * main print lower case alphabet in reverse
 * return: always 0
 */
int main(void)
{
	char letter;
	for (letter ='z'; letter>= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
