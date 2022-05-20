#include "monty.h"
/**
 * pint - prints the value at the top of the stack
 * @s: name of stack
 * @new_value: item of the stack
 */
void pint(stack_t **s, unsigned int new_value)
{
	if ((*s) == NULL || (*s) == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", new_value);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*s)->n);
}
