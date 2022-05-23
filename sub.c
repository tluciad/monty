#include "monty.h"
/**
 * sub - subtracts the top element of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void sub(stack_t **s, unsigned int line_number)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *s;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = (*s)->next;
	aux->n -= (*s)->n;
	pop(s, line_number);
}
