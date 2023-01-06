#include <stdio.h>

/**
* main - entry point
* @argc: character count, int
* @*argv: array of arguments passed to the program
* Return: 0
**/

int main(int argc, char *argv[])
{
	int i;

	printf("argc = %d\n\n", argc);
	printf("arguments inside argv[]\n");

	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i] );
	}
	return (0);
}
