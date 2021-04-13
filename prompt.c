#include "shell.h"
/**
 * prompt - Imprime prompt y recibe argumentos del standard input
 * Return: 0
 */
char *prompt(void)
{
	char *buffer;
	int check;
	size_t length = 1;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "ParrotOS$ ", 9);
	buffer = malloc(sizeof(char) * length);
	if (buffer == NULL)
	{
		perror("Error");
	}
	while (1)
	{
		check = getline(&buffer, &length, stdin);
		if (check == -1)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			exit(EXIT_SUCCESS);
		}
		return (buffer);
	}
	perror("Error");
}

/**
 * _sigign - ignora lo del control C
 * @sig: ctrl+C
 */
void _sigign(int sig)
{
	if (sig == SIGINT)
		write(1, "\nParrotOS$ ", 9);
}
