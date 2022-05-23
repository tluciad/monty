#include "monty.h"

/**
 * queue - sets the format of the data to a queue (FIFO)
 *
 * @stack: head of the linked list
 * @line_number: line number;
 * Return: no return
 */
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	varglobal.lifo = 0;
}

/**
 * stack - sets the format fo the data to a stack (LIFO)
 *
 * @stack: head of the linked list
 * @line_number: line number;
 * Return: no return
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	varglobal.lifo = 1;
}
