#include "monty.h"

/**
 * rotl - rotates the first element to the bottom and  the second to the top
 *
 * @s: head of the linked list
 * @new_number: line number;
 * Return: no return
 */
void rotl(stack_t **s, unsigned int new_number)
{
    stack_t *aux1 = NULL;
    stack_t *aux2 = NULL;
    (void)new_number;

    if (*s == NULL)
        return;

    if ((*s)->next == NULL)
        return;

    aux1 = (*s)->next;
    aux2 = *s;

    for (; aux2->next != NULL; aux2 = aux2->next)
        ;

    aux1->prev = NULL;
    aux2->next = *s;
    (*s)->next = NULL;
    (*s)->prev = aux2;
    *s = aux1;
}
