#include "monty.h"

/**
 * _queue - prints the top
 * @head: head of stack
 * @i: number of lines
 *
 * Return: Nothing.
*/
void _queue(stack_t **head, unsigned int i)
{
	(void)head;
	(void)i;
	info.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 *
 * Return: Nothing.
*/
void add_queue(stack_t **head, int n)
{
	stack_t *new_n, *prev_n;

	prev_n = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{
		printf("Error\n");
	}
	new_n->n = n;
	new_n->next = NULL;
	if (prev_n)
	{
		while (prev_n->next)
			prev_n = prev_n->next;
	}
	if (!prev_n)
	{
		*head = new_n;
		new_n->prev = NULL;
	}
	else
	{
		prev_n->next = new_n;
		new_n->prev = prev_n;
	}
}
