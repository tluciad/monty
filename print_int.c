#include "monty.h"
/**
 * print_int - prints the value at the top of the stack
 * 
<<<<<<< HEAD
 * @s: name of the stack
 * @new_value: new item to push
=======
 * @stack: name of the stack
 * @line_number: new item to push
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
 * Return: Always 0
 */
void print_int(stack_t **s, unsigned int new_value)
{
	if (!stack || !*stack)
	{
<<<<<<< HEAD
		fprintf(stderr, "L%d: can't pint, s empty\n", new_value);
		free_dlistint(*s);
=======
		fprintf(stderr, "L%d: can't pint, s empty\n", line_number);
		free_dlistint(*stack);
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", (*stack)->n);
}
