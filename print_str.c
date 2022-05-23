#include "monty.h"
/**
 * print_str - prints the string starting at the top of the stack
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void print_str(stack_t **s, unsigned int new_value)
{
	stack_t *aux;
	(void)new_value;

	aux = *s;

	while (aux && aux->n > 0 && aux->n < 128)
	{
		printf("%c", aux->n);
		aux = aux->next;
	}

	printf("\n");
}
