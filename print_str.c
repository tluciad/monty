#include "monty.h"
/**
 * print_str - prints the string starting at the top of the stack
 *
<<<<<<< HEAD
 * @s: name of the stack
 * @new_value: new item to push
=======
 * @stavck: name of the stack
 * @line_number: new item to push
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
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
