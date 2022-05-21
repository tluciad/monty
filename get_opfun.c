#include "monty.h"
/**
 * @brief 
 * 
 */
void (*get_opfun(char *tok_a, unsigned int line_number))(stack_t **stack, unsigned int line_number)
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
		{"div", div},
		{"mod", mod},
		{"pchar", prints_char},
		{"pstr", prints_str},
		{"rotl", rotates_s_bottom},
		{"rotr", rotate_s_top},
		{NULL, NULL}
	};
	int i = 0;
    while (opfun[i].opcode != NULL)
	{
		if (strcmp(opfun[i].opcode, tok_a) == 0)
			return (opfun[i].f);
		i++;
	}
	// TODO: If the method is not found, exit with an error.
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, tok_a);
	exit(EXIT_FAILURE);
}
