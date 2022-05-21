#include "monty.h"
/**
 * main - main function of stack and queue
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0
 */
int main(int argc, char const *argv[])
{
    char *methode_file = argv[1];

    FILE *f = fopen(methode_file, "r");
    if (argc != 2)
    {
        fprintf(stderr, "usage: monty file \n");
        exit(EXIT_FAILURE);
    }

    char *cont;

    getline(&cont, NULL, f);
    return 0;
}
