#include "monty.h"
/**
 * div - divides the second top element of the stack
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void div(stack_t **s, unsigned int new_value)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *s;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't div, stack too short\n", new_value);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*s)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", new_value);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*s)->next;
	aux->n /= (*s)->n;
	pop(s, new_value);
}

