#include "main.h"

char *cap_string(char *s)
{
	int i = 0;
	int new_word = 1;
	while (s[i] != '\0')
		;
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
		s[i] == ',' || s[i] == ';' || s[i] == '.' ||
		s[i] == '!' || s[i] == '?' || s[i] == '"' ||
		s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
	{
		new_word = 1; // indique que le prochain caractère doit être majusculé
	}
	else if (new_word == 1 && s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32; // ici on met en majuscule
		new_word = 0;
	}
	else
	{
		new_word = 0; // caractère normal
	}
}
