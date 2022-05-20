#include "monty.h"
/**
 * parser -  line spliter
 * @cont: content
 */
void parser(char *cont, unsigned int new_value)
{
    char *tok_a =strtok(cont, " \n");
    char *tok_b =strtok(NULL, " \n");

    int (*ptr)(stack_t **s, unsigned int new_value);
    ptr = get_