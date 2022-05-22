#include "monty.h"
/**
 * pop - removes the top element of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void pop(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	else
		delete_dnodeint_at_index(stack, 0);
}
