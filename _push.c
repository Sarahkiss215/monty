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

	if (info.arg)
	{
		if (info.arg[0] == '-')
			index++;
		for (; info.arg[index] != '\0'; index++)
		{
			if (info.arg[index] > 57 || info.arg[index] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", i);
			fclose(info.file);
			free(info.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", i);
		fclose(info.file);
		free(info.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	new = atoi(info.arg);
	if (info.lifi == 0)
		add_node(head, new);
	else
		add_queue(head, new);
}
