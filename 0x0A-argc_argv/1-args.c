#include "main.h"
#include <stdio.h>

/**
 * main - print count of args
 * @argc: argc
 * @argv: argv
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc);

	return (0);
}
