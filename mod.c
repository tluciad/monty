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
	if (!s || !*s || !(*s)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else if ((*s)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		((*s)->next)->n = ((*s)->next)->n % (*s)->n;
		delete_dnodeint_at_index(s, 0);
	}
}
