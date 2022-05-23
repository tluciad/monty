#include "monty.h"
<<<<<<< HEAD
global_t varglobal;

/**
 * free_varglobal - frees the global variables
 *
 * Return: no return
 */
void free_varglobal(void)
{
    free_dlistint(varglobal.head);
    free(varglobal.buffer);
    fclose(varglobal.f);
}

/**
 * start_vglo - initializes the global variables
 *
 * @fd: file descriptor
 * Return: no return
 */
void start_varglobal(FILE *f)
{
    varglobal.lifo = 1;
    varglobal.cont = 1;
    varglobal.arg = NULL;
    varglobal.head = NULL;
    varglobal.f = f;
    varglobal.buffer = NULL;
}

/**
 * check_input - checks if the file exists and if the file can
 * be opened
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: file struct
 */
FILE *check_input(int argc, char *argv[])
{
    FILE *f;

    if (argc == 1 || argc > 2)
    {
        dprintf(2, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    f = fopen(argv[1], "r");

    if (f == NULL)
    {
        dprintf(2, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    return (f);
}

/**
* main - main function of stack and queue
* @argc: number of arguments
* @argv: value of arguments
* Return: 0
*/
int main(int argc, char *argv[])
{
	void (*f)(stack_t **stack, unsigned int line_number);
	FILE *fd;
	size_t size = 256;
	ssize_t nlines = 0;
	char *lines[2] = {NULL, NULL};

	fd = check_input(argc, argv);
	start_varglobal(fd);
	nlines = getline(&varglobal.buffer, &size, fd);
	while (nlines != -1)
	{
		lines[0] = strtok(varglobal.buffer, " \t\n");
		if (lines[0] && lines[0][0] != '#')
		{
			f = get_opfun(lines[0]);
			if (!f)
			{
				dprintf(2, "L%u: ", varglobal.cont);
				dprintf(2, "unknown instruction %s\n", lines[0]);
				free_varglobal();
				exit(EXIT_FAILURE);
			}
			varglobal.arg = strtok(NULL, " \t\n");
			f(&varglobal.head, varglobal.cont);
		}
		nlines = getline(&varglobal.buffer, &size, fd);
		varglobal.cont++;
	}

	free_varglobal();

	return (0);
=======

/**
 * main - main function for monty project
 * @argc: argument counter
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char **argv)
{
    char buff[40000], *line, *copied_lines[4096], *exec_line = NULL;
    int fd;
    unsigned int i;
    void (*handling_function)(stack_t **, unsigned int);
    stack_t *stack = NULL;

    initialize_buffer(buff, 40000);
    initialize_array(copied_lines, 4096);
    if (argc != 2)
        USAGE_ERROR;
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
        OPEN_ERROR(argv[1]);
    read(fd, buff, 40000);
    close(fd);
    replace_emptylines(buff, copied_lines);
    line = strtok(buff, "\n");
    lines_to_array(line, copied_lines);
    for (i = 1; copied_lines[i - 1]; i++)
    {
        exec_line = strtok(copied_lines[i - 1], " ");
        if (!exec_line)
            continue;
        handling_function = getopcode_fun(exec_line);
        if (!handling_function)
            INSTRUCTION_ERROR(i, exec_line, stack);
        handling_function(&stack, i);
    }
    if (stack)
        free_dlistint(stack);
    return (0);
>>>>>>> c6c706afb87d30b8efb22a10f10ee2a6d48090fe
}
