#include "main.h"
#include <stdio.h>

/**
 * main - print program name
 * @argv: argv
 * @argc: argc
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
