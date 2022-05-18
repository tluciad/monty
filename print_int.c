#include "monty.h"
/**
 * print_int - prints the value at the top of the stack
 * 
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void print_int(stack_t **s, unsigned int new_value)
{
	if (!s || !*s)
	{
		fprintf(stderr, "L%d: can't pint, s empty\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*s)->n);
}
