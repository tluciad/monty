#include "monty.h"

/**
 * queue - sets the format of the data to a queue (FIFO)
 *
 * @s: head of the linked list
 * @new_value: line number;
 * Return: no return
 */
void queue(stack_t **s, unsigned int new_value)
{
	(void)s;
	(void)new_value;

	varglobal.lifo = 0;
}

/**
 * stack - sets the format fo the data to a stack (LIFO)
 *
 * @s: head of the linked list
 * @new_value: line number;
 * Return: no return
 */
void stack(stack_t **s, unsigned int new_value)
{
	(void)s;
	(void)new_value;

	varglobal.lifo = 1;
}
