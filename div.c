#include "monty.h"
/**
 * div_ - divides the second top element of the stack
 *
 * @stack: name of the stack
 * @line_number: new item to push
 * Return: Always 0
 */
<<<<<<< HEAD
void div_(stack_t **s, unsigned int new_value)
=======
void div_op(stack_t **stack, unsigned int line_number)
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *stack;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
<<<<<<< HEAD
		dprintf(2, "L%u: can't __div, stack too short\n", new_value);
=======
		dprintf(2, "L%u: can't div, stack too short\n", line_number);
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
<<<<<<< HEAD
		dprintf(2, "L%u: _division by zero\n", new_value);
=======
		dprintf(2, "L%u: division by zero\n", line_number);
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
		free_varglobal();
		exit(EXIT_FAILURE);
	}

	aux = (*stack)->next;
	aux->n /= (*stack)->n;
	pop(s, line_number);
}
