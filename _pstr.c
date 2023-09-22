#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @head: head of stack
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _pstr(stack_t **head, unsigned int i)
{
	stack_t *h;
	(void) i;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
