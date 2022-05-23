#include "monty.h"
/**
 * pop - removes the top element of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void pop(stack_t **s, unsigned int line_number)
{
	stack_t *aux;

	if (line_number == NULL || *s == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}
	aux = *s;
	*s = (*s)->next;
	free(aux);
}
