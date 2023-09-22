#include "monty.h"

/**
 * _div - divides the top two elements of the stack.
 * @head: head of the stack
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _div(stack_t **head, unsigned int i)
{
	stack_t *h;
	int length = 0, new_n;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", i);
		fclose(info.file);
		free(info.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", i);
		fclose(info.file);
		free(info.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_n = h->next->n / h->n;
	h->next->n = new_n;
	*head = h->next;
	free(h);
}
