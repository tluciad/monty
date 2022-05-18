#include "monty.h"
/**
 * print_str - prints the string starting at the top of the stack
 *
 * @s: name of the stack
 * @new_value: new item to push
 * Return: Always 0
 */
void print_str(stack_t **s, __attribute__((unused)) unsigned int new_value)
{
	size_t lenght = 0;
	stack_t *temporal;

	temporal = *s;
	while (temporal)
	{
		if ((temporal)->n > 0 && (temporal)->n < 127)
		{
			printf("%c", (temporal)->n);
			lenght++;
			temporal = (temporal)->next;
		}
		else
			break;
	}
	printf("\n");
}
