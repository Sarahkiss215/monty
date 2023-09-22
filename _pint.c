#include "monty.h"

/**
 * _pint - prints the top
 * @head: stack head
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _pint(stack_t **head, unsigned int i)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", i);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
