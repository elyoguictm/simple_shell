#include "shell.h"
/**
 * printenv - Imprime el env actual
 * Return: 0
 */
int printenv(void)
{
	int line;

	for (line = 0; environ[line] != NULL; line++)
		printf("%s\n", environ[line]);

	return (0);
}


/**
 * builtin - Build func
 * @s: Spec
 * Return: int
 */
int built(char *s)
{
	int i = 0;

	cmnd_t comms[] = {
		{"env", printenv},
		{"exit", exitkbshell},
		{NULL, NULL}
	};

	while (comms[i].arg != NULL)
	{
		if (_strcmp(comms[i].arg, s) == 0
		    && (_strlen(comms[i].arg) == _strlen(s)))
			return (comms[i].func());
		i++;
	}
	return (1);
}

/**
 * *_getenv - Valor env
 * @name: nombre env
 * Return: 0
 */
char *_getenv(const char *name)
{
	char *match = NULL;
	unsigned int x = 0, y = 0, z = 0, m = 0;

	while (environ[y] != NULL)
	{
		while (name[z] != '\0')
		{
			if (name[z] == environ[y][x])
			{
				z++, x++;
			}
			else
				break;
		}
		if (name[z] == '\0')
		{
			x++;
			match = malloc(sizeof(char) * strlen(environ[y]) - x + 1);
			while (environ[y][x] != '\0')
			{

				match[m] = environ[y][x];
				m++, x++;
			}
			return (match);
		}
		else
			z = x = 0, y++;
	}
	free(match);
	return ("No matches");
}
