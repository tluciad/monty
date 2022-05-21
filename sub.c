#include "monty.h"
/**
 * sub - subtracts the top element of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void sub(stack_t **stack, unsigned int line_number)
{
	if (!s || !*s || !(*s)->next)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
	{
		((*s)->next)->n = ((*s)->next)->n - (*s)->n;
		delete_dnodeint_at_index(s, 0);
	}
}
