#include "main.h"
/**
* print_string - prints a string
* @s: the string
*Return: void type function
*/
void print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
	}
}
