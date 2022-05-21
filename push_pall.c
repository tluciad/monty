#include "monty.h"

/**
 * push - push action for monty
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */

void push(stack_t **stack, unsigned int line_number)
{
	int new_item = 0;
	int is_int;
	
	is_int = string_is_int(global_s);
	if (is_int == 0)
	{
		new_item = atoi(global_s);
		add_dnodeint(s, new_item);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
}
/**
 * pall - prints all the info of the stack
 * @s: name of the stack
 * @line_number: new item to push
 */

void pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (stack)
		print_dlistint(*stack);
}
