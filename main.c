#define _GNU_SOURCE
#include "monty.h"
info_t info = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: argument vector
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t byte = 0;
	ssize_t rd_line = 1;
	stack_t *stack = NULL;
	unsigned int i = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	info.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (rd_line > 0)
	{
		content = NULL;
		rd_line = getline(&content, &byte, file);
		info.content = content;
		i++;
		if (rd_line > 0)
		{
			execute(content, &stack, i, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
