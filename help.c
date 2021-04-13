#include "shell.h"

/**
 * fndpath - Encuentra el path de un comando
 * @name: Command
 * Return: name
 */

char *fndpath(char *name)
{
	const char *path = "PATH";
	char *value, *tok;
	char *dir[8];
	struct stat statbuff;
	int num = 0;

	value = _getenv(path);
	tok = strtok(value, TOK_DELIM);
	do {
		dir[num] = NULL;
		dir[num] = _strdup(tok);
		dir[num] = str_concat(dir[num], name);
		if (name[0] == '/')
			break;
		if (_strcmp(name, "./") == 0)
			break;
		if (stat(dir[num], &statbuff) == 0)
		{
			free(value);
			return (dir[num]);
		}
		else
			num++;
		tok = strtok(NULL, TOK_DELIM);
	} while (tok != NULL);
	free(dir[num]);
	free(value);
	return (name);
}
