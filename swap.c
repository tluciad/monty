#include "monty.h"
/**
 * swap_two_elements -  swaps the top two elements of the stack
 * 
 * @s: name of the stack
 * @new_item: new item to push
 * Return: Always 0
 */
void swap_two_elements(stack_t **s, unsigned int new_item)
{
	int new_value;

	if (!s || !*s || !(*s)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", new_item);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
	{
		new_value = (*s)->n;
		(*s)->n = ((*s)->next)->n;
		((*s)->next)->n = new_value;
	}
}
