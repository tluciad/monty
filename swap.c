#include "monty.h"
/**
 * swap_two_elements -  swaps the top two elements of the stack
 * 
 * @s: name of the stack
 * @new_item: new item to push
 * Return: Always 0
 */
void swap(stack_t **s, unsigned int new_value)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *s;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", new_value);
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = *s;
	*s = (*s)->next;
	aux->next = (*s)->next;
	aux->prev = *s;
	(*s)->next = aux;
	(*s)->prev = NULL;
}
