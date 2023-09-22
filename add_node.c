#include "monty.h"

/**
 * add_node - add node to the head stack
 * @head: head of the stack
 * @n: new value
 *
 * Return: Nothing.
*/
void add_node(stack_t **head, int n)
{

	stack_t *new_n, *prev_n;

	prev_n = *head;
	new_n = malloc(sizeof(stack_t));
	if (new_n == NULL)
	{
		printf("Error\n");
		exit(0);
       	}
	if (prev_n)
		prev_n->prev = new_n;
	new_n->n = n;
	new_n->next = *head;
	new_n->prev = NULL;
	*head = new_n;
}
