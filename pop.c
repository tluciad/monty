#include "monty.h"
/**
 * pop - removes the top element of the stack
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void pop(stack_t **s, unsigned int new_value)
{
	if (!s || !*s)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
		delete_dnodeint_at_index(s, 0);
}
