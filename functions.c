#include "main.h"
/**
* print_char - prints a char
* @a: the char
*Return: j
*/
int print_char(char a)
{
	int j = 1;

	write(1, &a, 1);
	return (j);
}
/**
* print_string - prints a string
* @s: the string
*
*Return: the length of the string
*/
int print_string(char *s)
{
	int len;

	if (s == NULL)
	{
		print_char('(');
		print_char('n');
		print_char('u');
		print_char('l');
		print_char('l');
		print_char(')');
		len = 6;
		return (len);

	}
	for (len = 0; s[len] != '\0'; len++)
	{
		write(1, &s[len], 1);
	}
	return (len);
}
/**
* just_in_case - checks format[i + 1]
* @a: format[i + 1]
*
*Return: the amount of chars printed
*/
int just_in_case(char a)
{
	int b = 1;

	if (a != '%')
	{
		write(1, "%", 1);
		write(1, &a, 1);
		b++;
		return (b);
	}
	write(1, "%", 1);
	return (b);
}
