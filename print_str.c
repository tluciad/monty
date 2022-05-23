#include "monty.h"
/**
 * print_str - prints the string starting at the top of the stack
 *
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
void print_str(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	(void)line_number;

	aux = *stack;

	while (aux && aux->n > 0 && aux->n < 128)
	{
		printf("%c", aux->n);
		aux = aux->next;
	}

	printf("\n");
}
