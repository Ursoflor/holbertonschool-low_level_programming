#include <stdio.h>
/**
 * main - entry point for program, main function
 * Return: 0
 */
int main(void)
{
	char ch = '`';

	while (ch < 'z')
	{
		ch++;
	if (ch == 'e')
		continue;
	if (ch == 'q')
		continue;
	putchar(ch);
	}
	putchar('\n');
return (0);
}

