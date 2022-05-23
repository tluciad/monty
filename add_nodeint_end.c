#include "monty.h"

/**
 *add_nodeint_end - add a node at the end
 *@head: first position of linked list
 *@n: data to store
 *Return: a doubly linked list
 */
stack_t *add_nodeint_end(stack_t **head, const int n)
{
    stack_t *temp, *aux;

    if (head == NULL)
        return (NULL);
    temp = malloc(sizeof(stack_t));
    if (!temp)
    {
        dprintf(2, "Error: malloc failed\n");
        free_varglobal();
        exit(EXIT_FAILURE);
    }
    temp->n = n;

    if (*head == NULL)
    {
        temp->next = *head;
        temp->prev = NULL;
        *head = temp;
        return (*head);
    }
    aux = *head;
    while (aux->next)
        aux = aux->next;
    temp->next = aux->next;
    temp->prev = aux;
    aux->next = temp;
    return (aux->next);
}