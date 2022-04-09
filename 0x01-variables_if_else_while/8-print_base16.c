#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)

{
	char d = '0';



	while (d <= '9')

	{

		putchar(d);

		d++;

	}



	char b = '10';



	while (b <= '15')

	{

		putchar(b);

		b++;

	}



	putchar('\n');

	return (0);
}
