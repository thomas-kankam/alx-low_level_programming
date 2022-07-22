#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file followed by a new file
 * @argc: argument count
 * @argv: arguments passed to a main as an array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
