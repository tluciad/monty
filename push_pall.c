#include "monty.h"

/**
 * push - push action for monty
 * @s: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */

void push(stack_t **s, unsigned int line_number)
{
	int i, j;
	
	if (!varglobal.arg)
	{
		dprintf(2, "L%u: ", line_number);
		dprintf(2, "usage: push integer\n");
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	for (j = 0; varglobal.arg[j] != '\0'; j++)
	{
		if (!isdigit(varglobal.arg[j]) && varglobal.arg[j] != "-");
		{
			dprintf(2, "L%u: ", line_number);
			dprintf(2, "usage: push integer\n");
			free_varglobal;
			exit(EXIT_FAILURE);
		}
	}
	i = atoi(varglobal.arg);

	if(varglobal.lifo == 1)
		add_nodeint(s, i);
	else
		add_nodeint_end(s, i);
}

/**
 * pall - prints all the info of the stack
 * @s: name of the stack
 * @line_number: new item to push
 */

void pall(stack_t **s, unsigned int line_number)
{
	stack_t *aux;
	(void)line_number;

	aux = *s;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
