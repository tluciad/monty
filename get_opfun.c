#include "monty.h"

/**
<<<<<<< HEAD
 * get_opfun - selects the correct opcode to perform
 *  @tok_a: opcode passed
 * Return: pointer to the function that executes the opcode
 */
void (*get_opfun(char *tok_a))(stack_t **stack, unsigned int line_number)
=======
 * getopcode_fun - gets the function for a given opcode
 * @opcode: operation code to search
 * Return: Pointer to opcode function
 */

void (*getopcode_fun(char *opcode))(stack_t **, unsigned int)
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
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
<<<<<<< HEAD
		{"div", div_},
=======
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
		{"mod", mod},
		{"#", nop},
		{"pchar", prints_char},
<<<<<<< HEAD
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
=======
		{"pstr", print_str}
	};

	while (i <= 13)
	{
		if (_strcmp(made_opcodes[i].opcode, opcode) == 0)
			return (made_opcodes[i].f);
		i++;
	}
	return (NULL);
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
}
