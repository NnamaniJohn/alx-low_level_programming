#include <stdio.h>
/**
* prints the lowercase alphabet in revers
* Return: 0 on success
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
