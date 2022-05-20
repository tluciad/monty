#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

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

ssize_t read_textfile(const char *filename, size_t letters);
void push(stack_t **s, unsigned int new_value);
void pall(stack_t **s, __attribute__((unused)) unsigned int new_value);
void pint(stack_t **s, unsigned int new_value);
void swap_two_elements(stack_t **s, unsigned int new_item);
void add(stack_t **s, unsigned int new_value);
void nop(stack_t **s, unsigned int new_value);

void sub(stack_t **s, unsigned int new_value);
void mul(stack_t **s, unsigned int new_value);
void div(stack_t **s, unsigned int new_value);
void mod(stack_t **s, unsigned int new_value);
void prints_char(stack_t **s, unsigned int new_value);
void prints_str(stack_t **s, unsigned int new_value);
void rotate_s_bottom(stack_t **s, unsigned int new_value);
void rotate_s_top(stack_t **s, unsigned int new_value);

void stack_queue(stack_t **s, unsigned int new_value);
void add_node(stack_t **s, unsigned int new_value);

#endif
