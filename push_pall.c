#include "monty.h"

/**
 * push - push action for monty
 * @s: name of the stack
 * @new_item: new item to push
 */

void push(stack_t **s, unsigned int new_item)
{
	int new_value = 0;
	int is_int;
	char *value;

	value = strtok(NULL, " ");
	is_int = string_is_int(value);
	if (is_int == 0)
	{
		new_value = atoi(value);
		add_dnodeint(s, new_value);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", new_item);
		free_dlistint(*s);
		exit(EXIT_FAILURE);
	}
}
/**
 * pall - prints all the info of the stack
 * @s: name of the stack
 * @new_item: new item to push
 */

void pall(stack_t **s, __attribute__((unused)) unsigned int new_item)
{
	if (s)
		print_dlistint(*s);
}
