#include "monty.h"
/**
 * rotr - reverse the stack
 *
 * @s: head of the linked list
 * @new_value: line number
 * Return: no return
 */
void rotr(stack_t **s, unsigned int new_value)
{
	stack_t *aux = NULL;
	(void)new_value;

	if (*s == NULL)
		return;

	if ((*s)->next == NULL)
		return;

	aux = *s;

	for (; aux->next != NULL; aux = aux->next)
		;

	aux->prev->next = NULL;
	aux->next = *s;
	aux->prev = NULL;
	(*s)->prev = aux;
	*s = aux;
}
