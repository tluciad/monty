#include "monty.h"

/**
 * push - push action for monty
<<<<<<< HEAD
 * @s: name of the stack
 * @new_value: new item to push
=======
 * @stack: name of the stack
 * @line_number: new item to push
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
 * Return: Always 0
 */

void push(stack_t **stack, unsigned int line_number)
{
	int n, j;

	if (!varglobal.arg)
	{
		dprintf(2, "L%u: ", line_number);
		dprintf(2, "usage: push integer\n");
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	for (j = 0; varglobal.arg[j] != '\0'; j++)
	{
		if (!isdigit(varglobal.arg[j]) && varglobal.arg[j] != '-')
		{
			dprintf(2, "L%u: ", line_number);
			dprintf(2, "usage: push integer\n");
			free_varglobal();
			exit(EXIT_FAILURE);
		}
	}

	n = atoi(varglobal.arg);

	if (varglobal.lifo == 1)
		add_nodeint(s, n);
	else
		add_nodeint_end(s, n);
}

/**
 * pall - prints all the info of the stack
 * @stack: name of the stack
 * @line_number: new item to push
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *aux;
	(void)line_number;

	aux = *stack;

	while (aux)
	{
		printf("%d\n", aux->n);
		aux = aux->next;
	}
}
