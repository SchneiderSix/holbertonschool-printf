#include "main.h"

void print_char(char a)
{
	write(1, &a, 1);
}

int print_string(char *s)
{
	int len, i;

	if (s == NULL)
	{
		write(1, '(', 1);
		write(1, 'n', 1);
		write(1, 'u', 1);
		write(1, 'l', 1);
		write(1, 'l', 1);
		write(1, ')', 1);
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
	
	write(1, "%", 1);
	if (a != '%')
	{
		write(1, &a, 1);
		b++;
		return (b);
	}
	return (b);
}
