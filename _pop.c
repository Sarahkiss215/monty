#include "monty.h"

/**
 * _pop - prints the top
 * @head: stack head
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _pop(stack_t **head, unsigned int i)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", i);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
