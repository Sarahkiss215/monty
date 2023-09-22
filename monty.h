#ifndef MONTY_H
#define MONTY_H

#include <stddef.h>
#include <stdlib.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct info_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct info_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  info_t;
extern info_t info;
void _push(stack_t **head, unsigned int i);
void _pall(stack_t **head, unsigned int i);
void _add(stack_t **head, unsigned int i);
void _div(stack_t **head, unsigned int i);
void _nop(stack_t **head, unsigned int i);
void _pint(stack_t **head, unsigned int i);
void _pop(stack_t **head, unsigned int i);
void _sub(stack_t **head, unsigned int i);
void _swap(stack_t **head, unsigned int i);


#endif /* MONTY_H */
