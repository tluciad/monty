#include "monty.h"
/**
 * add - adds the top two elements of the stack
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void add(stack_t **s, unsigned int new_value)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *s;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", new_value);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = (*s)->next;
	aux->n += (*s)->n;
	pop(s, new_value);
}
