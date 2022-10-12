#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculator
 * @argc: args count
 * @argv: args value
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int num1, num2, ans;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	ans = op_func(num1, num2);
	printf("%d\n", ans);

	return (0);
}
