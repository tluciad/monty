#include "monty.h"
/**
 * mod - computes the rest of the _division
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void mod(stack_t **s, unsigned int new_value)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *s;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", new_value);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	if ((*s)->n == 0)
	{
		dprintf(2, "L%u: _division by zero\n", new_value);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = (*s)->next;
	aux->n %= (*s)->n;
	pop(s, new_value);
}
