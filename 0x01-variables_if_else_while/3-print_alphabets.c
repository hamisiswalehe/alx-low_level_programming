#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
* Description: prints the alphabets
* Return: 0
*/
int main(void)
{
char c = 'a';
char C = 'A';

while (c <= 'z')

{
putchar(c);
c++;
}

c = 'A';

while (c <= 'Z')

{
putchar(c);
C++;
}

putchar('\n');
return (0);
}
