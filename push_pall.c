#include "monty.h"

/**
 * push - push action for monty
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */

void push(stack_t **s, unsigned int new_value)
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
		fprintf(stderr, "L%d: usage: push integer\n", new_value);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
}
/**
 * pall - prints all the info of the stack
 * @s: name of the stack
 * @new_value: new item to push
 */

void pall(stack_t **s, __attribute__((unused)) unsigned int new_value)
{
	if (s)
		print_dlistint(*s);
}
