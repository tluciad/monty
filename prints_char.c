#include "monty.h"
/**
 * prints_char - prints the char at the top of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void prints_char(stack_t **s, unsigned int line_number)
{
	if (s == NULL || *s == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}
	if ((*s)->n < 0 || (*s)->n >= 128)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", line_number);
		free_varglobal();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*s)->n);
}
