#include <stdio.h>

/**
 * main - main function
 * @argc: integer
 * @argv: char
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
