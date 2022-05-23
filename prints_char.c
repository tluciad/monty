#include "monty.h"
/**
 * prints_char - prints the char at the top of the stack
 *
 * @stack: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void prints_char(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n >= 128)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
