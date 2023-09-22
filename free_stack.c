#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 *
 * Return: Nothing.
 */
void free_stack(stack_t *head)
{
	stack_t *new_n;

	new_n = head;
	while (head)
	{
		new_n = head->next;
		free(head);
		head = new_n;
	}
}
