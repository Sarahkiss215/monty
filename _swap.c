#include "monty.h"

/**
 * _swap - adds the top two elements of the stack.
 * @head: stack head
 * @i: number of lines
 *
 * Return: Nothing
*/
void _swap(stack_t **head, unsigned int i)
{
	stack_t *h;
	int length = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", i);
		fclose(info.file);
		free(info.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
