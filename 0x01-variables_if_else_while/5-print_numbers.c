#include <stdio.h>
/**
 * main - entry point for program, main function
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
