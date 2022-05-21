#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @s: name of stack
 * @line_number: item of the stack
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if ((*s) == NULL || (*s) == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*s)->n);
}
