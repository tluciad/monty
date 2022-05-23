#include "monty.h"
/**
 * print_int - prints the value at the top of the stack
 * 
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void print_int(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		fprintf(stderr, "L%d: can't pint, s empty\n", line_number);
		free_dlistint(*stack);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}
