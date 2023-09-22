#include "monty.h"

/**
  * _rotl- rotates the stack to the top
  * @head: head of stack
  * @i: number of lines
  *
  * Return: Nothing.
 */
void _rotl(stack_t **head,  __attribute__((unused)) unsigned int i)
{
	stack_t *etmp = *head, *new_n;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	new_n = (*head)->next;
	new_n->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = new_n;
}
