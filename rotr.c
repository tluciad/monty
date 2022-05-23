#include "monty.h"
/**
 * rotr - reverse the stack
 *
 * @s: head of the linked list
 * @line_number: line number
 * Return: no return
 */
void _rotr(stack_t **s, unsigned int line_number)
{
	stack_t *aux = NULL;
	(void)line_number;

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
