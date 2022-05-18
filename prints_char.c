#include "monty.h"
/**
 * prints_char - prints the char at the top of the stack
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void prints_char(stack_t **s, unsigned int new_value)
{
	if (!s || !*s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else if (((*s)->n) > 127 || ((*s)->n) < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
		printf("%c\n", (*s)->n);
}
