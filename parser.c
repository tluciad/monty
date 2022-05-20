#include "monty.h"
/**
 * parser -  line spliter
 * @cont: content
 */
void parser(char *cont)
{
    char *token = strtok(cont, "\n");
    printf("%s", token);
}