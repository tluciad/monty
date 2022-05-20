#include "monty.h"
/**
 * main - main function of stack and queue
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0 
 */
int main(int argc, char const *argv[])
{
    char *meth_file = argv[1];

    FILE *f = fopen(meth_file, "r");
    char *c;

    getline(&c, NULL, f);
    return 0;
}
