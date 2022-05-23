#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @s: name of stack
 * @line_number: item of the stack
 */
void pint(stack_t **s, unsigned int new_value)
{
	(void)new_value;

	if (*s == NULL)
	{
		dprintf(2, "L%u: ", new_value);
		dprintf(2, "can't pint, stack empty\n");
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*s)->n);
}
