#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main bloc
 * Description: prints all single digit numbers of base 1
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)

{

	char c = 'z';



	while (c >= 'a')

	{

		putchar(c);

		c--;

	}



	putchar('\n');

	return (0);

}
