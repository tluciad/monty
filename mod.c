#include "monty.h"
/**
 * mod - computes the rest of the division
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void mod(stack_t **s, unsigned int new_value)
{
	if (!s || !*s || !(*s)->next)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else if ((*s)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", new_value);
		exit(EXIT_FAILURE);
	}
	else
	{
		((*s)->next)->n = ((*s)->next)->n % (*s)->n;
		delete_dnodeint_at_index(s, 0);
	}
}
