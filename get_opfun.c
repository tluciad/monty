#include "monty.h"
/**
 * get_opfun - selects the correct opcode to perform
 *  @tok_a: opcode passed
 * Return: pointer to the function that executes the opcode
 */
void (*get_opfun(char *tok_a))(stack_t **stack, unsigned int line_number)
{
    instruction_t opfun[] ={
        {"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"queue", queue},
		{"stack", stack},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"mul", mul},
		{"div", div_},
		{"mod", mod},
		{"pchar", prints_char},
		{"pstr", print_str},
		{NULL, NULL}
	};
	int i;

	for (i = 0; opfun[i].opcode; i++)
	{
		if (strcmp(opfun[i].opcode, tok_a) == 0)
			break;
	}

	return (opfun[i].f);
}
