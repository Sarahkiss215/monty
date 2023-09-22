#include "monty.h"

/**
  * _rotr- rotates the stack to the bottom
  * @head: head of stack
  * @i: number of lines
  *
  * Return: Nothing.
 */
void _rotr(stack_t **head, __attribute__((unused)) unsigned int i)
{
	stack_t *nodes;

	nodes = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (nodes->next)
	{
		nodes = nodes->next;
	}
	nodes->next = *head;
	nodes->prev->next = NULL;
	nodes->prev = NULL;
	(*head)->prev = nodes;
	(*head) = nodes;
}
