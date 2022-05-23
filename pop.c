#include "monty.h"
/**
 * pop - removes the top element of the stack
 *
 * @stack: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;

	if (line_number == NULL || *stack == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}
	aux = *stack;
	*stack = (*stack)->next;
	free(aux);
}
