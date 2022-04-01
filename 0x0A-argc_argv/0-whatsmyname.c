#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: counts arguments used in prompts
 * @argv: store array of arguments
 * Return: 0
 */

int main(int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
