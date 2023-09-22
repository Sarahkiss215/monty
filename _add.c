#include "monty.h"
i
/**
 * _add - adds the top two elements of the stack.
 * @head: stack head
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _add(stack_t **head, unsigned int i)
{
	stack_t *h;
	int length = 0, next_n;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", i);
		fclose(info.file);
		free(info.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	next_n = h->n + h->next->n;
	h->next->n = next_n;
	*head = h->next;
	free(h);
}
