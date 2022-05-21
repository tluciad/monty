#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
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

/**
 * struct globals - global structure to use in the functions
 * @lifo: is stack or queue
 * @cont: current line
 * @arg: second parameter inside the current line
 * @head: doubly linked list
 * @fd: file descriptor
 * @buffer: input text
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct globals{
	int lifo;
	unsigned int cont;
	char *arg;
	stack_t *head;
	FILE *f;
	char *buffer;
} global_t;

extern global_t varglobal;

ssize_t read_textfile(const char *filename, size_t letters);
void push(stack_t **s, unsigned int line_number);
void pall(stack_t **s, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap_two_elements(stack_t **stack, unsigned int new_item);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

void sub(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void div(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void prints_char(stack_t **stack, unsigned int line_number);
void prints_str(stack_t **stack, unsigned int line_number);
void rotate_s_bottom(stack_t **stack, unsigned int line_number);
void rotate_s_top(stack_t **stack, unsigned int line_number);

void stack_queue(stack_t **stack, unsigned int line_number);
void add_node(stack_t **stack, unsigned int line_number);
void parser(char *cont, unsigned int line_number);
void (*get_opfun(char *tok_a, unsigned int line_number))(stack_t **stack, unsigned int line_number);


void free_varglobal(void);gi
#endif
