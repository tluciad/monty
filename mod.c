#include "monty.h"
/**
 * mod - computes the rest of the division
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void mod(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		((*stack)->next)->n = ((*stack)->next)->n % (*stack)->n;
		delete_dnodeint_at_index(stack, 0);
	}
}
