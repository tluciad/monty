#include "monty.h"
/**
 * parser -  line spliter
 * @cont: content
 */
void parser(char *cont, unsigned int line_number)
{
    char *tok_a =strtok(cont, " \n");
    char *tok_b =strtok(NULL, " \n");
    global_s = tok_b;

    void (*ptr)(stack_t **stack, unsigned int line_number);
    ptr = get_opfun(tok_a, line_number);
    ptr(&global_s_head, line_number);
    free(tok_a);
    free(tok_b);
}
