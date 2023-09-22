#include "monty.h"

/**
 * execute - executes the opcode
 * @stack: head linked list - stack
 * @i: number of lines
 * @file: poiner to monty file
 * @content: line content
 *
 * Return: no return
 */
int execute(char *content, stack_t **stack, unsigned int i, FILE *file)
{
	instruction_t opst[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"sub", _sub},
				{"div", _div},
				{"mul", _mul},
				{"mod", _mod},
				{"pchar", _pchar},
				{"pstr", _pstr},
				{"rotl", _rotl},
				{"rotr", _rotr},
				{"queue", _queue},
				{"stack", _stack},
				{NULL, NULL}
				};
	unsigned int index = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	info.arg = strtok(NULL, " \n\t");
	while (opst[index].opcode && op)
	{
		if (strcmp(op, opst[index].opcode) == 0)
		{	opst[index].f(stack, i);
			return (0);
		}
		index++;
	}
	if (op && opst[index].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", i, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
