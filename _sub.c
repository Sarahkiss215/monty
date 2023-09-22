#include "monty.h"

/**
  * _sub- subtration
  * @head: stack head
  * @i: number of lines
  *
  * Return: Nothing.
 */
void _sub(stack_t **head, unsigned int i)
{
	stack_t *prev_n;
	int new_n, nodes;

	prev_n = *head;
	for (nodes = 0; prev_n != NULL; nodes++)
		prev_n = prev_n->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", i);
		fclose(info.file);
		free(info.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	prev_n = *head;
	new_n = prev_n->next->n - prev_n->n;
	prev_n->next->n = new_n;
	*head = prev_n->next;
	free(prev_n);
}
