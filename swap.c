#include "monty.h"
/**
 * swap -  swaps the top two elements of the stack
 * 
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *stack;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	*stack = (*stack)->next;
	aux->next = (*stack)->next;
	aux->prev = *stack;
	(*stack)->next = aux;
	(*stack)->prev = NULL;
}
