#include "monty.h"
/**
 * add - adds the top two elements of the stack
 *
 * @stack: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void add(stack_t **stack, unsigned int line_number)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *stack;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = (*stack)->next;
	aux->n += (*stack)->n;
	pop(stack, line_number);
}
