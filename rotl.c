#include "monty.h"

/**
 * rotl - rotates the first element to the bottom and  the second to the top
 *
<<<<<<< HEAD
 * @s: head of the linked list
 * @new_value: line number;
 * Return: no return
 */
void rotl(stack_t **s, unsigned int new_value)
=======
 * @stack: head of the linked list
 * @new_number: line number;
 * Return: no return
 */
void rotl(stack_t **stack, unsigned int new_number)
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
{
    stack_t *aux1 = NULL;
    stack_t *aux2 = NULL;
    (void)new_value;

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
