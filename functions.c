#include "main.h"

void print_char(char a)
{
	write(1, &a, 1);
}

int print_string(char *s)
{
	char nil[6] = "(null)";
	int len, i;

	if (s == NULL)
	{
		for (i = 0; i < 7; i++)
		{
			write(1, &nil[i], 1);
			len = 6;
			return (len);
		}

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
