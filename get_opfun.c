#include "monty.h"

/**
 * getopcode_fun - gets the function for a given opcode
 * @opcode: operation code to search
 * Return: Pointer to opcode function
 */

void (*getopcode_fun(char *opcode))(stack_t **, unsigned int)
{
	int i = 0;
	instruction_t made_opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", print_int},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", div_op},
		{"mul", mul},
		{"mod", mod},
		{"#", nop},
		{"pchar", prints_char},
		{"pstr", print_str}
	};

	while (i <= 13)
	{
		if (strcmp(made_opcodes[i].opcode, opcode) == 0)
			return (made_opcodes[i].f);
		i++;
	}
	return (NULL);
}
