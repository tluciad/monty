#include "monty.h"

/**
 * rotl - rotates the first element to the bottom and  the second to the top
 *
 * @stack: head of the linked list
 * @new_number: line number;
 * Return: no return
 */
void rotl(stack_t **stack, unsigned int new_number)
{
    stack_t *aux1 = NULL;
    stack_t *aux2 = NULL;
    (void)new_number;

    if (*stack == NULL)
        return;

    if ((*stack)->next == NULL)
        return;

    aux1 = (*stack)->next;
    aux2 = *stack;

    for (; aux2->next != NULL; aux2 = aux2->next)
        ;

    aux1->prev = NULL;
    aux2->next = *stack;
    (*stack)->next = NULL;
    (*stack)->prev = aux2;
    *stack = aux1;
}
