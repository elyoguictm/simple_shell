#include "shell.h"
/**
 * _strlen - Imprime el lenght del str
 * @s: str
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * *_strdup - Retorna puntero str
 * @str: string
 * Return: s
 */
char *_strdup(char *str)
{
	char *s;
	int i;

	if (str == NULL)
		return (NULL);

	s = malloc((_strlen(str) + 1) * sizeof(char));

	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
		s[i] = '\0';
	}
	return (s);
}

/**
 * _strcmp - Compara dos str
 * @s1: str 1
 * @s2: str 2
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && s1[i])
		i++;
	if (s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

/**
 * *str_concat - Concatena
 * @s1: Str1
 * @s2: Str2
 * Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i;
	int n = 0;
	int len1, len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);

	str = malloc((len1 + len2 + 2) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	str[i] = '/';
	i++;
	for (n = 0; n < len2; n++, i++)
		str[i] = s2[n];
	str[i] = '\0';
	free(s1);
	return (str);
}
