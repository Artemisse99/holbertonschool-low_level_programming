#include <stdio.h>
#include "main.h"
/**
 *main - prints the number of arguments passed into it
 * @argv: Parameters
 * @argc: Parameters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argc = 0;
	while (argv[argc] != 0)
	{
		argc++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
