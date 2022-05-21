#include "monty.h"
/**
 * swap_two_elements -  swaps the top two elements of the stack
 * 
 * @s: name of the stack
 * @new_item: new item to push
 * Return: Always 0
 */
void swap_two_elements(stack_t **stack, unsigned int new_item)
{
	int line_number;

	if (!s || !*s || !(*s)->next)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", new_item);
		free stack_t(*s);
		exit(EXIT_FAILURE);
	}
	else
	{
		line_number = (*s)->n;
		(*s)->n = ((*s)->next)->n;
		((*s)->next)->n = line_number;
	}
}
