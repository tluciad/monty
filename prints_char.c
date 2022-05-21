#include "monty.h"
/**
 * prints_char - prints the char at the top of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void prints_char(stack_t **stack, unsigned int line_number)
{
	if (!s || !*s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else if (((*s)->n) > 127 || ((*s)->n) < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", (*s)->n);
}
