#include "monty.h"

/**
 * _push - pushes an element to the stack
 * @head: head of the stack
 * @i: the number of the line the new elemnt is pudhed to.
 *
 * Return: Nothing.
 */
void _push(stack_t **head, unsigned int i)
{
	int new, index = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			index++;
		for (; bus.arg[index] != '\0'; index++)
		{
			if (bus.arg[index] > 57 || bus.arg[index] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", i);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", i);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	new = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, new);
	else
		addqueue(head, new);
}
