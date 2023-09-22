#include "monty.h"
/**
 * _pall - prints the stack
 * @head: head of stack
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _pall(stack_t **head, unsigned int i)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
