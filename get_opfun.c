#include "monty.h"
/**
 * @brief 
 * 
 */
void (*get_opfun(char *tok_a))(stack_t **s, unsigned int new_value)
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
	int i;
    }
}