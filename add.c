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
	if (!s || !*s || !(*s)->next)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
	{
		((*s)->next)->n = (*s)->n + ((*s)->next)->n;
		delete_dnodeint_at_index(s, 0);
	}
}
