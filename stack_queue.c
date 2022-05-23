#include "monty.h"

/**
 * _queue - sets the format of the data to a queue (FIFO)
 *
 * @s: head of the linked list
 * @line_number: line number;
 * Return: no return
 */
void queue(stack_t **s, unsigned int line_number)
{
	(void)s;
	(void)line_number;

	varglobal.lifo = 0;
}

/**
 * _stack - sets the format fo the data to a stack (LIFO)
 *
 * @s: head of the linked list
 * @line_number: line number;
 * Return: no return
 */
void stack(stack_t **s, unsigned int line_number)
{
	(void)s;
	(void)line_number;

	varglobal.lifo = 1;
}
