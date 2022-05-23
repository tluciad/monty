#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @s: name of stack
 * @line_number: item of the stack
 */
void pint(stack_t **s, unsigned int line_number)
{
	(void)line_number;

	if (*s == NULL)
	{
		dprintf(2, "L%u: ", line_number);
		dprintf(2, "can't pint, stack empty\n");
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*s)->n);
}
