#include "main.h"

void print_char(char a)
{
	write(1, &a, 1);
}

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

int just_in_case(char a)
{
	int b = 1;
	
	if (a != '%')
	{
		write(1, "%", 1);
		write(1, &a, 1);
		b += 2;
		return (b);
	}
	else
	{
		write(1, "%", 1);
		return (b);
	}
}
